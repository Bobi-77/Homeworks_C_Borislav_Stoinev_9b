//Борислав Стойнев 9б клас//
#include <stdio.h>
#define SWAP(A,B,TYPE) TYPE c; \
c=A; \
A=B; \
B=c; \

int main(){
    int A=10, B=7;
    SWAP(A,B,int);
    printf("%d %d", A,B);
    return 0;
}