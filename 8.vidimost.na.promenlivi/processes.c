#include <stdio.h>
#include <string.h>
#include "processes.h"

Process processes[5];
int processescount = 0;

int nextprocessid(){

    if(processescount > 5 ){
        return 0;
    }

    int id = processescount + 1;
    return id;
}

int createnewprocess(const char* name){

    int id = nextprocessid();

    if(id==0){
        return 0;
    }

    processes[processescount].id=id;
    strcpy(processes[processescount].name, name);
    processescount = processescount + 1;

    return id;
}

void stopprocess(int id){

    int flag = -1;
    for(int i=0; i < processescount; i++){
        if(processes[i].id == id){
            flag = i;
            break;
        }
    }

    if(flag == -1){
        return 0;
    }

    for (int i = flag; i < processescount - 1; i++) {
        processes[i] = processes[i + 1];
    }
    
    processescount = processescount - 1;

}



void printprocesses(){

    if( processescount == 0){
        printf("No working processes");
        return 0;
    }

    for( int i=0; i < processescount; i++){
        printf("Process #%d , Name:%s", processes[i].id, processes[i].name);
        
    }

}