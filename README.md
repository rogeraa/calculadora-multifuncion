# 🧮 Calculadora Multifunción — Proyecto en C

## 📌 Descripción  
Esta calculadora en consola permite realizar operaciones matemáticas básicas utilizando funciones y un menú interactivo.  
El usuario puede elegir entre suma, resta, multiplicación, división y potencia, con validación de errores como división entre cero.

Este proyecto forma parte de mi portafolio como desarrollador y demuestra el uso de funciones, estructuras de control, validación de datos y manejo de menús en C.

---

## 🧠 Funcionalidades  
- Suma  
- Resta  
- Multiplicación  
- División (con validación de división entre cero)  
- Potencia  
- Menú interactivo  
- Repetición hasta que el usuario decida salir  

---

## 🛠️ Tecnologías utilizadas  
- Lenguaje **C**  
- Compilador **MinGW** (Dev‑C++)  
- Consola de Windows  

---

## 📂 Estructura del proyecto  
```
calculadora/
│── main.c
│── README.md
```

---

## ▶️ Cómo compilar y ejecutar

### **Compilar con GCC**
```
gcc main.c -o calculadora -lm
```

### **Ejecutar**
```
./calculadora
```

### **En Dev‑C++**
- Compilar: **F9**  
- Ejecutar: **Ctrl + F10**

---

## 📜 Código principal

```c
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
```

---

## 🚀 Mejoras futuras  
- Agregar raíz cuadrada  
- Implementar factorial  
- Añadir historial de operaciones  
- Crear un menú más visual  
- Añadir colores en consola  

---

## 👨‍💻 Autor  
**Rogelio Aguilar Alcántara**  
Estudiante de Ingeniería en Desarrollo de Software  
Ciudad de México, México  
