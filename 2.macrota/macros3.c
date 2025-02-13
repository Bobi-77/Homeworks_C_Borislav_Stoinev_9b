//Борислав Стойнев 9б клас//
#include <stdio.h>
 
 #define DEBUG(a) printf("name: %s\n", #a); \
 printf("value: %d\n", a);\
 printf("file: %s\n", __FILE__);\
 printf("line: %d\n", __LINE__);


int main(){

   int a=5;
   DEBUG(a);
    

    return 0;
}