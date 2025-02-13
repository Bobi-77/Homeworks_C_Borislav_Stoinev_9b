//Борислав Стойнев 9бклас//
#include<stdio.h>
#include"transformation.h"


int main(){

    char correct[]="3157";
    
    transformation icorrect;
    icorrect = transformirane(correct);
    printf("result: %ld\n",icorrect.result);
    printf("error: %s",icorrect.error);


    return 0;
}