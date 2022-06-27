#include <stdio.h>

// creating calculation functions 
void add(int count);
void sub(int count);
void mult(int count);
void div(int count);

int main()
{
    int contrl, countOfNum;
    // contrl = chosing which calculation to use
    // countOfNum: how many numbers gonna user use
    
    while(1 == 1) // loop calculator until break or return
    {
        printf("0. close calc\n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
        printf("-> which calculation you want to do? ");
        scanf("%d", &contrl);
    
        if (contrl == 0) // close program when calcu is 0
        {
            printf("\n-> program is closed\n");
            return 0;
        }

        else if (!(contrl >= 1 && contrl <= 4)) // warn user when given invalid input
            printf("\n-> please give valid input");

        else
        {
            printf("-> how many numbers you gonna use? ");
            scanf("%d", &countOfNum);
            printf("\n");
            
            switch (contrl) // control for which calculation user want to use
            {
                case 1:
                add(countOfNum);
                break;
    
                case 2:
                sub(countOfNum);
                break;
    
                case 3:
                mult(countOfNum);
                break;
    
                case 4:
                div(countOfNum);
                break;
            }
        }
        printf("\n|-*--*---*---*---*--*-|\n\n");
    }
}

void add(int count)
{
    float res = 0, num[count];

    printf("-- addition --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("-> give num: ");
        scanf("%f", &num[i]);
        res = num[i] + res;
    }

    printf("\n-> result: %.2f", res);
}

void sub(int count)
{
    float res = 0, num[count];

    printf("-- subtraction --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("-> give num: ");
        scanf("%f", &num[i]);

        if (i == 0)
            res = num[0];
        
        else
            res = res - num[i];
    }

    printf("\n-> result: %.2f", res);
}

void mult(int count)
{
    float res = 1, num[count];

    printf("-- multiplication --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("-> give num: ");
        scanf("%f", &num[i]);
        res = num[i] * res;
    }

    printf("\n-> result: %.2f", res);
}

void div(int count)
{
    float res = 1, num[count];

    printf("-- division --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("-> give num: ");
        scanf("%f", &num[i]);
        res = num[i] / res;
    }

    printf("\n-> result: %f", res);
}
