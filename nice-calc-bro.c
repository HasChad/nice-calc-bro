#include <stdio.h>

//*--- Start of Code ---*//

int main()
{
    int a, b, calcu = 1;
    
    do{
        printf("0. close calc\n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
        printf("what calculation you want to do? ");
        scanf("%d", &calcu);
        printf("\n");
        
        if (!(calcu >= 0 && calcu <= 4))
            printf("please give valid input\n");

        else
            switch (calcu)
            {
                case 0:
                calcu = 0;
                break;

                case 1:
                printf("-- addition --\n");
                printf("give first number: ");
                scanf("%d", &a);
                printf("give second number: ");
                scanf("%d", &b);
                printf("\nresult: %d\n", a+b);
                break;

                case 2:
                printf("-- subtraction --\n");
                printf("give first number: ");
                scanf("%d", &a);
                printf("give second number: ");
                scanf("%d", &b);
                printf("\nresult: %d\n", a-b);
                break;

                case 3:
                printf("-- multiplication --\n");
                printf("give first number: ");
                scanf("%d", &a);
                printf("give second number: ");
                scanf("%d", &b);
                printf("\nresult: %d\n", a*b);
                break;

                case 4:
                printf("-- division --\n");
                printf("give first number: ");
                scanf("%d", &a);
                printf("give second number: ");
                scanf("%d", &b);
                printf("\nresult: %d\n", a/b);
                break;
            }
        printf("|-*--*---*---*---*--*-|\n\n");
    }while(calcu != 0);
}
