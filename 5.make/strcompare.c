#include<stdio.h>
#include"mystrings.h"

int main(){

    int i=0, exit;
    char str1[100], str2[100];

    printf("Enter string1:\n");
    printf("Enter string2:\n");

    exit = strcompare(str1, str2);
    printf("The exit is:%d", exit);

    return 0;
}