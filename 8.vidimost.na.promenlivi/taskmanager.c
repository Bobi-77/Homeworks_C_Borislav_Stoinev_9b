#include <stdio.h>
#include <string.h>
#include "processes.h"


int main(){

    int id, choice;
    char name[31];

    while(1){

        printf(" Menu:\n");
        printf("1. New Process\n");
        printf("2. List with processes\n");
        printf("3. Stoping process\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice){

            case 1: printf("Enter name(30symbls most): ",name);
                    scanf("%s", name);
                    id = createnewprocess(name);
                    if( id==0 ){
                        printf("The max amount of processes is reached.");
                    }
                    else{
                        printf("The process was created successfully.");
                    }
                    break;

            case 2: printprocesses(); 
                    break;

            case 3: printf("Enter number of the process you want to stop: ");
                    scanf("%d", id); 
                    stopprocess(id); 
                    printf("Process %d was stopped.",id); 
                    break;

            case 4: printf("Exiting program!"); 
                    return 0; 
                    break;

            default: printf("Wrong choice!\n Try again!\n"); 
                     break;
        }
    }

    return 0;

}