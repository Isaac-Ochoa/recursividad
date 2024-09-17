#include <stdio.h>

int cuadrado(int x){
    return x * x;
}

void imprimirMensaje(){
    printf("Hola, esta es una funcion que no retorna nada");
}

int suma(int a, int b){
    return a + b;
}

int main(){
    int num = 4;
    int resultado = cuadrado(num);
    printf("El cuadrado de %d es: %d\n", num, resultado);
        
   

    int res = suma(5,3);//Aqui llamamos a la funcion de suma
    printf("La suma de 5 y 3 es: %d\n", res);

    
    imprimirMensaje();

    return 0;
}

