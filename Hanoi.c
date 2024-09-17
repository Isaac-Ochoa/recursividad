#include <stdio.h>


int main() {
    int n;
    // Pedir al usuario el número de discos
    printf("Introduce el numero de discos: ");
    scanf("%d", &n);

    // Llamar a la función Hanoi para mover 'n' discos de la torre A a la torre C usando B como auxiliar
    hanoi(n, 'A', 'B', 'C');
    
    return 0;
}

// Función recursiva para resolver las Torres de Hanoi
void hanoi(int n, char origen, char auxiliar, char destino) {
    // Caso base: si solo hay un disco, moverlo directamente
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
    } else {
        // Mover n-1 discos de 'origen' a 'auxiliar' utilizando 'destino' como auxiliar
        hanoi(n - 1, origen, destino, auxiliar);
        // Mover el disco restante de 'origen' a 'destino'
        printf("Mover disco %d de %c a %c\n", n, origen, destino);
        // Mover los n-1 discos de 'auxiliar' a 'destino' utilizando 'origen' como auxiliar
        hanoi(n - 1, auxiliar, origen, destino);
    }
}

