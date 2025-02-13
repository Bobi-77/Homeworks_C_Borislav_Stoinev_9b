#include<stdio.h>
#include"safeint.h"

int main(int argc, char **argv[]){

    if(argv!=3) printf("Enter only two numbers");
    else{

        int a,b;
        SafeResult result;
        result = safestrtoint(argv[1]);
        if(result.errorflad == 1) { printf("Your first number is incorrect"); return 1;}
        a=result.value;
        result = safestrtoint(argv[2]);
        if(result.errorflad == 1) { printf("Your second number is incorrect"); return 1;}
        b=result.value;
        result=safesubstract(a,b);
        if(result.errorflad == 1){
            printf("Overflow!");
        }
        else {
            ("The result is:%d", result.value);
        }
        
        

    }
}