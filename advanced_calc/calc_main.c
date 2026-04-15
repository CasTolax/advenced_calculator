#include <stdlib.h>
#include <stdio.h>
#include "calc_lib.h"

void exit_procs(void);

int main(void)
{   
    atexit(exit_procs);

    int input;
    int a, b;

    printf(" -- advanced Calculator -- \n");

    while(1){

        printf("\n1) add 2) sub 3) mul 4) div 5) mod 6)  exit\n");
        scanf("%d",&input);

        if(input == 6){
            exit(EXIT_SUCCESS);
        }

        printf("a = ");
        scanf("%d",&a);

        printf("b = ");
        scanf("%d",&b);

        switch (input)
        {
        case 1: {
            int result = addition(a,b);
            printf("result = %d\n",result);
            break;
        }

        case 2: {
            int result = subtraction(a,b);
            printf("result = %d\n",result);
            break;
        }

        case 3: {
            int result = multiplication(a,b);
            printf("result = %d\n",result);
            break;
        }

        case 4: {
            if(b == 0){
                printf("Cannot divide by zero!\n");
            } else {
                int result = division(a,b);
                printf("result = %d\n",result);
            }
            break;
        }
        case 5: {
            int m;

            printf("m = ");
            scanf("%d",&m);

            int result = mod(a,b,m);
            printf("result = %d",result);
            
            break;
        }

        default:
            printf("Invalid input\n");
        }
    }

    return 0;
}

void exit_procs(void)
{
    printf("Exit is successfully!\n");
}
