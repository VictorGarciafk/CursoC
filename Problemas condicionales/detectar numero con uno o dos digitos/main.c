#include<stdio.h>
#include<conio.h>

int main(){
    int numero;

    printf("ingrese un numero del 1 al 99: ");
    scanf("%i", &numero);
    
    if (numero >= 10)
    {
        printf("es un numero de dos digitos");
    }else{
        printf("es un numero de un digito");
    }
    getch();

    return 0;
}