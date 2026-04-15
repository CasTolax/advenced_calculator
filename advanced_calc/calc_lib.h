#include <stdlib.h>
#include <stdio.h>

#ifndef calc_lib_h
#define calc_lib_h

#define PI 3.1416 // 3.1416

int addition(int a, int b)
{
    return a+b;
}

int subtraction(int a, int b)
{
    return a-b;
}

int multiplication(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b; //* problem solved
}

int mod(int a, int b, int m)
{
    return ((a+b) * 2) % m;
}

/*
float get_circle(float area, float perimeter,float radius, float diameter)
{
     
    We defined PI = 3.1416
    area, perimeter, radius, diameter
    
    return area,perimeter,radius,diameter; 
}

*/

#endif
