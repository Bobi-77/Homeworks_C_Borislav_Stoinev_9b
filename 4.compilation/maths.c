//Борислав Стойнев 9бклас//
#include<stdio.h>
#include"maths.h"

int factorial(int n){

    int result = n;
    for (int i = 1; i < n; i++) {
        result *= i;
    }
    return result;
}
