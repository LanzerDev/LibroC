#include<stdio.h>
#include<stdlib.h>

int main(void){
    int primerNum = 1;
    signed int segundoNum = -2;
    unsigned int tercerNum = 2;
    printf("int: %d\n", primerNum);
    printf("signed int: %d\n", segundoNum);
    printf("unsigned: %d\n", tercerNum);

    system("pause");
    return 0;
}
/*
int se entiende que es un entero de cualquier signo
signed int es un entero que llevara signo
unsigned int es un entero positivo, pero si le asignas un valor negativo
no hay ningun problema, esto se usa para aumentar el tamano que 
puede tener un entero positivo
*/