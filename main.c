#include "stdio.h"
#include "math.h"

void suma();
void resta();
void multiplicar();
void dividir();
void potencia();

int main(){
    int opc;
    do {
        printf("\n====== Calculadora Simple ======\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("5) Potencia\n");
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
        if (opc == 5){
            potencia();
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

void potencia(){
    float base, exponente;
    printf("Ingresa la base: ");
    scanf("%f", &base);
    printf("Ingresa el exponente: ");
    scanf("%f", &exponente);
    printf("Resultado: %.2f\n", pow(base, exponente));
}