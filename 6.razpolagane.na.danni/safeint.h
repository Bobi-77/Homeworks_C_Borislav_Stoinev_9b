#ifndef SEFEINT_H_
#define SAFEINT_H_

typedef struct{
    int value;
    int errorflad;
}   SafeResult;

SafeResult safeadd(int a, int b);
SafeResult safesubstract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedevide(int a, int b);
SafeResult safestrtoint(char str[]);


#endif