#include "stdio.h"

void suma();
void resta();

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
