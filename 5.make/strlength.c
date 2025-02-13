#include<stdio.h>
#include"mystrings.h"

int main() {
    char str[100];
    int exit;
    printf("Enter string:\n");
        
    exit=strlength(str);
    printf("The length is: %d\n", exit);
    return 0;
}

