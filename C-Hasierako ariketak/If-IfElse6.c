#include <stdio.h>

int main() {
    int numero;

    // Solicita al usuario que ingrese un número
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Comprueba si el número es positivo, negativo o cero
    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
