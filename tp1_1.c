#include <stdio.h>

int main(){
    int variable = 8;         
    int *puntero = &variable; 

    printf("1) Contenido del puntero: %d\n", *puntero);

    printf("2) Direccion almacenada por el puntero: %p\n", puntero);

    printf("3) Direccion de la variable: %p\n", &variable);

    printf("4) Direccion del puntero: %p\n", &puntero);

    printf("5) Tamanio de la variable: %zu bytes\n", sizeof(variable));

    return 0;
}