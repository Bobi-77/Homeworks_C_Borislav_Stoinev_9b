//Борислав Стойнев 9бклас//
#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

typedef struct 
    {
        schoolclass class[20];
        schoolroom room[10];
    } school;

int main(){

    school school;
    printf("School structure is ready.\n");
   
    return 0;
}