#include <stdio.h>
#include "quadraticroots.h"

void print_roots(QuadraticRootsResult result){
        if(result.norealroots == 1){
            printf("Nqma koreni!");
        }
        else printf("Korenite sa: x1=%.2lf , x2=%.2lf", result.x1, result.x2);
}

int main(){

    QuadraticRootsResult result;

    int a=2,b=4,c=6;
    printf("Input int(%d ,%d, %d)", a, b, c);
    QuadraticRootsResult result1 = findroots(a, b, c);
    print_roots(result1);

    float a1=2.3,b1=4.5,c1=6.0;
    printf("Input float(%d ,%d, %d)", a1, b1, c1);
    QuadraticRootsResult result2 = findroots(a1, b1, c1);
    print_roots(result2);

    double a2=200,b2=4000,c2=60000;
    printf("Input double(%d ,%d, %d)", a2, b2, c2);
    QuadraticRootsResult result3 = findroots(a2, b2, c2);
    print_roots(result3);

    return 0;
}