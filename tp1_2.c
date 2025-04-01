#include <stdio.h>


int cuadrado(int num);
void cuadrado_void(int num, int *resultado);
void mostrar_variable(int *var);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);

int main() {
    int num1, num2, resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Cuadrado de %d: %d\n", num1, cuadrado(num1));
    cuadrado_void(num2, &resultado);
    printf("Cuadrado de %d (usando void): %d\n", num2, resultado);
    printf("\nVariable num1:\n");
    mostrar_variable(&num1);
    printf("Variable num2:\n");
    mostrar_variable(&num2);
    printf("\nAntes de invertir: num1 = %d, num2 = %d\n", num1, num2);
    invertir(&num1, &num2);
    printf("Despues de invertir: num1 = %d, num2 = %d\n", num1, num2);
    printf("\nAntes de ordenar: num1 = %d, num2 = %d\n", num1, num2);
    ordenar(&num1, &num2);
    printf("Despues de ordenar: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

int cuadrado(int num) {
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}

void cuadrado_void(int num, int *resultado) {
    *resultado = num * num;
}

void mostrar_variable(int *var) {
    printf("Direccion: %p, Contenido: %d\n", (void*)var, *var);
}

void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenar(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
