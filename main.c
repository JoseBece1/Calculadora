#include "stdio.h"

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
    }while(opc != 0);
}