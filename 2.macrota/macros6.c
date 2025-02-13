//Борислав Стойнев 9б клас//
#include <stdio.h>
#define SWAP(A,B,TYPE) TYPE C; \
C=A; \
A=B; \
B=C; \

#define SORT(ARRAY, SIZE, TYPE, COMPARE) TYPE i, j; \
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

    int main(){
        int array[] = {9,4,7,2,1,5,8};
        int size = sizeof(array) / sizeof(array[0]);
        SORT(array, size, int, >);
        for(int i=0; i < size;i++){
            printf("%d\n",array[i]);
        }

    return 0;
}