//Борислав Стойнев 9бклас//
#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_

#include "person.h"

 typedef struct{
    Person student[26];
    char class;
    int number;
    Person teacher;
}schoolclass;

#endif