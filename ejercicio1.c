#include <stdio.h>
#include <conio.h>

void decimalAbinario(int n){
    if (n == 0){
        return ;
    }
    decimalAbinario(n/2);//llamada recursiva
    printf("%d",n % 2); //Imprimir el residuo (0 o 1)
}



int main(){
    int num = 0;

    printf("El numero a convertir es: ");
    scanf("%d",&num);

    if(num > 0){
        printf("la representacion binaria de %d es: ", num);
        decimalAbinario(num);
        printf("\n"); 
    }else{
        printf("el numero que ingresaste es 0");
    }
    getch();
    return 0;
}