#include<stdio.h>
#include<string.h>
#include"mystrings.h"
int main(){

    char str1[100],str2[100];
    printf("Enter string1:\n");
 
    int i=0;

    while(str1[i] != 0){

        i++;
    }

    if(i>50){

        printf("Too long string");
        return 0;
    }

    i=0;

    while(str2[i] != 0){

        i++;
    }

    if(i>50){

        printf("Too long string");
        return 0;
    }

    strconcat(str1, str2);

    printf("The exit is:\n");

    for(i=0; str1[i] !='\0' ; i++){
        print("%c", str1[i]);
    }

}