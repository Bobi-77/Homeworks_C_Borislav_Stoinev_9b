//Борислав Стойнев 9бклас//
#include <stdio.h>
#define SWAP(A,B,TYPE) TYPE C; \
C=A; \
A=B; \
B=C; \

#define DEBUG(ARRAY, SIZE, TYPE, COMPARE) TYPE i, j;  \
for(i=0; i < SIZE; i++)\
{\
    for(j=i+1; j < SIZE; j++)\
    {\
        if(ARRAY[i] COMPARE ARRAY[j])\
        {\
        SWAP(ARRAY[i], ARRAY[j], TYPE)\
        }\
    }\   
}\

#define SUM(ARRAY, SIZE, TYPE) TYPE sum=0;\
for(i=1; i<SIZE; i++){\
    if(i%3==0){\
        sum=sum+ARRAY[i];\
    }\
}\

int main(){
    int arr[]={7,4,9,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    DEBUG(arr, size, int, >);
    #ifdef DEBUG 
    for(int i=0; i<size; i++){
        printf("%d\n",arr[i]);
    }
    #endif

    SUM(arr, size, int);
    printf("%d",sum);
    
    
    return 0;
}