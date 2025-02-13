//Борислав Стойнев 9бклас//
#include<stdio.h>
#include"transformation.h"
#include<string.h>

transformation transformirane(char correct[]){                                     
    transformation icorrect;
    int i = 0;
    int sign = 1;

    icorrect.result = 0;
    icorrect.error[0] = 0;

    if(correct[i] == '-')
    {
        sign = -1;
        i++;
    }
    if(correct[i] == '+')
        i++;
      
    while(correct[i] != 0)
    {
        if(correct[i] >= '0' && correct[i] <= '9')
        {
            icorrect.result = icorrect.result * 10 + (correct[i] - '0');
        }
        else
        {
            strcpy(icorrect.error, "Invalid input string");
            icorrect.result = 0;
            return icorrect;
        }
        i++;
    }

    icorrect.result = icorrect.result * sign;

    return icorrect;
}