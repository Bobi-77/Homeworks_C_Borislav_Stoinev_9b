#ifndef PROCESSES_H_
#define PROCESSES_H_

typedef struct{
    int id;
    char name[31];
} Process;

extern Process processes[5];
extern int processescount;

int createnewprocess(const char* name);
int nextprocessid();
void stopprocess(int id);
void printprocesses();

#endif