#include <stdlib.h>
#include <stdio.h>
#include "calc_lib.h"

void exit_procs(void);

struct pointers
{
    int *p1; // this pointer for a
    int *p2; // this pointer for b
    /*write result adress or process adress*/
};


int main(int a,int b)
{   
    atexit(exit_procs);

    int input;
    int done = 0; // while loop

    printf(" -- advenced Calculator -- \n");
    printf("Please select process or exit the calculator!\n");
    printf("1) addition 2) subtraction 3) multiplication 4) division 5) EXIT ");
    
    // ask the user for process
    scanf("%d",&input);

    while(!done){

        switch (input)
    {
    case 1:
        
         printf("a = ?");
        scanf("%d",&a);

        printf("b = ?"); 
        scanf("%d",&b);

        int result_add = addition(a,b);
        printf("result = %d\n",result_add);
        printf("escape ctrl+c\n");

        break;

    case 2:

         printf("a = ?");
        scanf("%d",&a);

        printf("b = ?"); 
        scanf("%d",&b);    

        int result_sub = subtraction(a,b);
        printf("result = %d\n",result_sub);
        printf("escape ctrl+c\n");

        break;

    case 3:

         printf("a = ?");
        scanf("%d",&a);

        printf("b = ?"); 
        scanf("%d",&b);    

        int result_multip = multiplication(a,b);
        printf("result = %d\n",result_multip); //! there is a someting wrong
        printf("escape ctrl+c\n");

        break;
    case 4:

         printf("a = ?");
        scanf("%d",&a);

        printf("b = ?"); 
        scanf("%d",&b);

        int result_div = division(a,b);
        
        if(a == NULL || b == NULL){
            printf("You must cannot division with zero!\n");
            break;
        } 
        else {
            printf("result = %d\n",result_div);
            printf("escape ctrl+c\n");
        }

        break;
    case 5:
       exit(EXIT_SUCCESS);
        break;

    default:
        break;
    }

    }
    
    return 0;
}

/*
 when user exit from calculator, this function will be start and
 break the loop and write on screen.
*/ 
void exit_procs(void)
{
    printf("Exit is successfully!\n");
}