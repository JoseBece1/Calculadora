#include "stdio.h"

void suma();
void resta();
void multiplicar();
void dividir();

int main(){
    int opc;
    do {
        printf("\n====== Calculadora Simple ======\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("0) Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opc);
        if (opc == 1){
            suma();
        }
        if (opc == 2){
            resta();
        }
        if (opc == 3){
            multiplicar();
        }
        if (opc == 4){
            dividir();
        }
    }while(opc != 0);
}

void suma(){
    float a, b;
    printf("Ingresa el primer número: ");
    scanf("%f", &a);
    printf("Ingresa el segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a + b);
}

void resta(){
    float a, b;
    printf("Ingresa el primer número: ");
    scanf("%f", &a);
    printf("Ingresa el segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a - b);
}

void multiplicar(){
    float a, b;
    printf("Ingresa el primer número: ");
    scanf("%f", &a);
    printf("Ingresa el segundo número: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a * b);
}

void dividir(){
    float a, b;
    printf("Ingresa el primer número: ");
    scanf("%f", &a);
    printf("Ingresa el segundo número: ");
    scanf("%f", &b);
    
    if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
    } else {
        printf("Error: No se puede dividir entre cero\n");
    }
}