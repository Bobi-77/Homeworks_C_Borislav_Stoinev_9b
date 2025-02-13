#include<stdio.h>
#include"safeint.h"
#include<limits.h>

SafeResult safeadd(int a, int b){

    SafeResult result;
    result.errorflad = 0;

    long long temp = (long long)a + (long long)b;
    if(temp > INT_MAX || temp < INT_MIN)
        result.errorflad = 1;
    else 
        result.value = (int)temp;

    return result;
}

SafeResult safesubstract(int a, int b){

    SafeResult result;

    SafeResult result;
    result.errorflad = 0;

    long long temp = (long long)a - (long long)b;
    if(temp > INT_MAX || temp < INT_MIN)
        result.errorflad = 1;
    else 
        result.value = (int)temp;

    return result;
    
}

SafeResult safemultiply(int a, int b){

    SafeResult result;
    result.errorflad = 0;

    long long temp = (long long)a * (long long)b;
    if(temp > INT_MAX || temp < INT_MIN)
        result.errorflad = 1;
    else 
        result.value = (int)temp;

    return result;
}

SafeResult safedevide(int a, int b){

    SafeResult result;

   SafeResult result;
    result.errorflad = 0;

    long long temp = (long long)a / (long long)b;
    if(temp > INT_MAX || temp < INT_MIN )
        result.errorflad = 1;
    else 
        result.value = (int)temp;

    return result;
}

SafeResult safeadd(char str[]){

    int i=0;
    int sign = 1;
    long long l;

    SafeResult result;
    result.errorflad = 0;
    result.value = 0;

    if(str[0] == '-'){
        i++;
        sign= -1;
    }
    if(str[0] == '+'){
        i++;
    }

    while(str[i] != '\0'){
        if((str[i] < '0') || (str[i] > '9')){
            result.errorflad = 1;
            break;
        }
        else {
            l = (long long)result.value * 10;
            if(util(sign, l)) { result.errorflad = 1; break;}
            l = l + str[i];
            if(util(sign, l)) { result.errorflad = 1; break;}
            result.value = l;
        }
        i++;
    }

    result.value = result.value * sign;
    return result;

    }

    int util(int sign, long long l){
        if((sign > 0 && l>INT_MAX) || (sign < 0 && l<INT_MIN)) {
            return 1;
        }
        return 0;
    }



    
    
