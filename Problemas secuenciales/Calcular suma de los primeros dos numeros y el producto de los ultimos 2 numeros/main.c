#include<stdio.h>
#include<conio.h>

int main(){

    int num1, num2, num3, num4, suma, producto;

    printf("ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("ingrese el tercer numero: ");
    scanf("%i", &num3);

    printf("ingrese el cuarto numero: ");
    scanf("%i", &num4);

    suma = num1 + num2;
    producto = num3 * num4;

    printf("la suma de los primeros dos numeros es: ");
    printf("%i\n", suma);

    printf("el producto de los primeros dos numeros es: ");
    printf("%i\n", producto);
    getch();

    return 0;
}
