#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#ifndef calc_lib_h
#define calc_lib_h

#define PI 3.141592653589793 // PI number

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
    return a/b; 
}

int mod(int a, int b, int m)
{
    return ((a+b) * 2) % m;
}

// circle calculations
static inline double getdiameter(double radius)
{
    return 2 * radius;
}

static inline double getperimeter(double radius)
{
    return 2 * PI * radius;
}

static inline double getarea(double radius)
{
    return PI * radius * radius;
}

// basic calculations with square and cube.
static inline double getSquare(double z)
{
    return z * z;
}

static inline double getCube(double z)
{
    return z * z * z;
}


#endif
