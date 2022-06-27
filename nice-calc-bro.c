#include <stdio.h>

//*--- Start of Code ---*//

void add(int count)
{
    int res = 0, num[count];

    printf("-- addition --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("give num: ");
        scanf("%d", &num[i]);
        res = num[i] + res;
    }

    printf("\nresult: %d", res);
}

void sub(int count)
{
    int res = 0, num[count];

    printf("-- subtraction --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("give num: ");
        scanf("%d", &num[i]);
        res = num[i] - res;
    }

    printf("\nresult: %d", res);
}

void mult(int count)
{
    int res = 1, num[count];

    printf("-- multiplication --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("give num: ");
        scanf("%d", &num[i]);
        res = num[i] * res;
    }

    printf("\nresult: %d", res);
}

void div(int count)
{
    int res = 1, num[count];

    printf("-- division --\n");

    for (int i = 0; i < count; ++i)
    {
        printf("give num: ");
        scanf("%d", &num[i]);
        res = num[i] / res;
    }

    printf("\nresult: %d", res);
}

void main()
{
    int a, b, calcu = 1, countOfNum;
    
    while(1 == 1)
    {
        printf("0. close calc\n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
        printf("what calculation you want to do? ");
        scanf("%d", &calcu);
        
        if (calcu = 0)
        {
            break;
        }

        printf("how many numbers you gonna use? ");
        scanf("%d", &countOfNum);
        printf("\n");

        if (calcu = 0);
        
        if (!(calcu >= 1 && calcu <= 4))
            printf("please give valid input\n");

        else
            switch (calcu)
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
        printf("\n|-*--*---*---*---*--*-|\n\n");
    };
}
