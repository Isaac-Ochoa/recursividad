#include <stdio.h>
#include <conio.h>

//int factorial(int n){
//
//if(n == 0 || n == 1){
//return 1;
//}
//return n * factorial(n - 1);
//}

//int main(){
//long int num = 31;
//printf("El factorial de %d es: %d\n", num, factorial(num));
//getch();
//return 0;
//}

int factorial(int i, int resultado, int num){
    if(i > num){
        return resultado;
    }
    resultado *= i;

    return factorial(i+1, resultado, num);
}

int main(){
int num = 31;
printf("El factorial de %d es: %d\n", num, factorial(1,1,num));
getch();
return 0;
}