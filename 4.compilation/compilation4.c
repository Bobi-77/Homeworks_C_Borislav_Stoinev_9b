//Борислав Стойнев 9бклас//
#include<stdio.h>
#include<math.h>

int main(){

    long arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n ; i++){
        arr[i]=pow(arr[i],4);
        printf("%ld\n",arr[i]);
    }

    return 0;
}
