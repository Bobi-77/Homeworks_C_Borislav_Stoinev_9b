#include<stdio.h>
#include"mystrings.h"

int strlength(char*str){

    int result=0;
    for(int i=0; str[i]!='\0';i++){
        result++;
    }
    return 0;
}

void strconcat(char str1[],char str2[]){

    int i=0,j=0;

    while(str1[i] != '\0'){
        i++;
    }

    for(j=0; str2[j] != '\0' ; j++, i++){
        str1[i]=str2[j];
    }
}

int strcompare(char str1[], char str2[]){

    int i=0,temp=0,a=0,b=0,j=0;

    for(i=0; i<'\0'; i++){
        a++;
    }

    for(j=0; i<'\0'; j++){
        b++;
    }

    if(a==b){

        while(temp<a){
            if(str1[temp]==str2[temp]) return;
            else if(str1[temp]>str2[temp]) return 1;
            else return -1;
            temp++;
        }
    }
    else if(a>b) {
        return 1;
        }
    else return-1;

    return 0;
}



    

