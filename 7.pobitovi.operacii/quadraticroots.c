#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>


QuadraticRootsResult findroots(long double a, long double b, long double c){

    QuadraticRootsResult result;
    result.norealroots = 0;

    long double D;

    D=((b*b) - (4*a*c));

    if(D<0){
        result.norealroots = 1;
        return result;
    }

    printf("Дискриминанта: %lf\n", D);

    D = sqrtl(D);

    long double x1, x2;

    x1= ((-b -D) / (2*a));
    x2= ((-b +D) / (2*a));


    result.x1 = x1;
    result.x2 = x2;
    return result; 
}
