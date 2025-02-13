#include<stdio.h>
#include<limits.h>

int main(){

    int a;
    short b;
    long c;
    long long d;

    printf("%-10s %-10s %-10s %-20s %-20s %-20s %-20s", "Name", "Format", "Size", "Signed Max", "Signed Min", "Unsigned Format", "Unsigned Max");
    printf("%-10s %-10s %-10s %-20s %-20s %-20s %-20s", "int", "%d", sizeof(a), INT_MAX, INT_MIN, "%ud", UINT_MAX);
    printf("%-10s %-10s %-10s %-20s %-20s %-20s %-20s", "long", "%ld", sizeof(c), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX );
    printf("%-10s %-10s %-10s %-20s %-20s %-20s %-20s", "long long","%lld", sizeof(d), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);
    printf("%-10s %-10s %-10s %-20s %-20s %-20s %-20s", "short", "%hd", sizeof(b), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);
    

    return 0;
}