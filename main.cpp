#include <stdio.h>
#include <math.h>

// Prototipos de funciones
float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);
float potencia(float base, float exp);
void mostrarMenu();

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu();
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 5) {
            printf("Ingresa el primer numero: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 2:
                resultado = restar(num1, num2);
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error: No se puede dividir entre cero.\n\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("Resultado: %.2f\n\n", resultado);
                }
                break;

            case 5:
                resultado = potencia(num1, num2);
                printf("Resultado: %.2f\n\n", resultado);
                break;

            case 6:
                printf("Saliendo de la calculadora...\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
        }

    } while (opcion != 6);

    return 0;
}

// Implementación de funciones
float sumar(float a, float b) { return a + b; }
float restar(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return a / b; }
float potencia(float base, float exp) { return pow(base, exp); }

void mostrarMenu() {
    printf("=== Calculadora Multifuncion ===\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Potencia\n");
    printf("6. Salir\n");
}

