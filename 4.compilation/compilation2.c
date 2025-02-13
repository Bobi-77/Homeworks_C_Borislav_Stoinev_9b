//Борислав Стойнев 9бклас//
#include <stdio.h>

int main(){
    int a=12;
    int b=18;
    int sum=a, temp=b;
    
    while(sum!=temp){
        if(sum>temp){
            temp=temp+b;
        }
        else sum=sum+a;
    }
    printf("%d",sum);
    
    return 0;
}