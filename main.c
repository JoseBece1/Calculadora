#include "stdio.h"
void suma();
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