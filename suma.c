#include <stdio.h> //definicion de la funcion suma
int suma(int a, int b){
    return a + b;
}

int main(){
    int resultado = suma(5,3);//Aqui llamamos a la funcion de suma
    printf("La suma de 5 y 3 es: %d\n", resultado);
    return 0;
}