//Борислав Стойнев 9б клас//
#include <stdio.h>
#define COMAND(NAME,TYPE) TYPE ## _ ## NAME ## _ ## command
#define DEFINE_COMMAND(NAME,TYPE) void COMAND(NAME,TYPE) (void)

DEFINE_COMMAND(number,first){
    printf("number one\n");
}

DEFINE_COMMAND(number,second){
    printf("number two\n");
}

int main(){

    first_number_command();
    second_number_command();

    return 0;
}