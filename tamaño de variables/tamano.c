#include<stdio.h>
#include<stdlib.h>

int main(void){
    int integer = 10000000;
    long longvar;
    short shortvar;
    printf("int es igual a:%d y ocupa: %d bytes en memoria\n", integer, sizeof(integer));
    printf("long: %d\n", sizeof(longvar));
    printf("short: %d\n", sizeof(shortvar));
    system("pause");
}