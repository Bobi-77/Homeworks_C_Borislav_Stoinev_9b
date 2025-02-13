//Борислав Стойнев 9бклас//
#include <stdio.h>
#define ARRAY_SIZE 5

int main(){
    int size;
    int arr[ARRAY_SIZE];
    #if defined ARRAY_SIZE
    if(ARRAY_SIZE>0 && ARRAY_SIZE<11) {
        int arr[ARRAY_SIZE];
    
    arr[0]=1;
    printf("%d\n",arr[0]);
    for(int i=1;i<ARRAY_SIZE;i++){
        
        arr[i]=arr[i-1]*2;
    }
    for(int i=1;i<ARRAY_SIZE;i++){
        printf("%d\n", arr[i]);
    }
    }
    else printf("The size is wrong");
    #endif
    


    return 0;
}