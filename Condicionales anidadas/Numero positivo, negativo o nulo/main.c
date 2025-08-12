#include<stdio.h>

int main(){

    int numero;

    printf("ingrese un numero entero: ");
    scanf("%i", &numero);

    if (numero > 0)
    {
        printf("el numero es positivo");
    }else if(numero == 0){
        printf("el numero es neutro");
    }else{
        printf("el numero es negativo");
    }
    

    return 0;
}