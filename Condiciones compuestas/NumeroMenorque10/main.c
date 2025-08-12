#include<stdio.h>

int main(){
    int num1, num2, num3;

    printf("ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        printf("Alguno de los numeros es menor que 10");
    }else{
        printf("todos los numeros son mayor que 10");
    }
    return 0;
}