#include <stdlib.h>
#include <stdio.h>
#include "calc_lib.h"


void exit_procs(void);

struct calc_main
{
    int *p1; // a
    int *p2; // b
}p;


int main(void)
{   
    atexit(exit_procs);

    int input;   // ask the input
    int a,b;    // basic calculations 
    double z;   // square and cube
    double x;   // trigonometer

    // this is a and b adress
    p.p1 = &a; 
    p.p2 = &b;

    printf(" -- advanced Calculator -- \n");

    while(1){

        printf("\n 1) add 2) sub 3) mul 4) div 5) mod 6)circle calculator 7) square 8) cube 99) exit\n");
        printf("9) Trigonometer Calculations \n ");

        scanf("%d",&input);

        if(input == 99){
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

            printf("\n a adress = %p",p.p1);
            printf("\n b adress = %p", p.p2);
            break;
        }

        case 2: {
            int result = subtraction(a,b);
            printf("result = %d\n",result);

             printf("\n a adress = %p",p.p1);
             printf("\n b adress = %p", p.p2);
            break;
        }

        case 3: {
            int result = multiplication(a,b);
            printf("result = %d\n",result);

             printf("\n a adress = %p",p.p1);
             printf("\n b adress = %p", p.p2);
            break;
        }

        case 4: {
            if(b == 0){
                printf("Cannot divide by zero!\n");
            } else {
                int result = division(a,b);
                printf("result = %d\n",result);

                 printf("\n a adress = %p",p.p1);
                 printf("\n b adress = %p", p.p2);
            }
            break;
        }
        case 5: {
            int m;

            printf("m = ");
            scanf("%d",&m);

            int result = mod(a,b,m);
            printf("\nresult = %d",result);

             printf("\n a adress = %p",p.p1);
            printf("\n b adress = %p", p.p2);
            break;
        }
        
        case 6: { 
            double radius;

            printf("enter the radius = ");
            scanf("%lf",&radius);
            
            printf("Diameter: %.2f\n", getdiameter(radius));
            printf("Perimeter: %.2f\n", getperimeter(radius));
            printf("Area: %.2f\n", getarea(radius));
            break;

         }
        case 7: {

           printf("enter the square: ");
           scanf("%lf",&z);

           double result_sqr = getSquare(z);
           printf("result = %0.2f",result_sqr);

           break;
        }

        case 8: {
            
            printf("enter the cube: ");
            scanf("%lf",&z);

            double result_cube = getCube(z);
            printf("result = %0.2f",result_cube);

            break;
        }

        case 9: {

             printf("enter angle(radian: )");
            scanf("%lf",&x);

            printf("sin(x) = %.4f\n", sin(x));
            printf("cos(x) = %.4f\n", cos(x));
            printf("tan(x) = %.4f\n", tan(x));
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
