#include<stdio.h>
#include<conio.h>

int main(){
    int num1, num2, num3, num4, suma;
    float promedio;

    printf("ingrese el primer valor: ");
    scanf("%i", &num1);

    printf("ingrese el segundo valor: ");
    scanf("%i", &num2);

    printf("ingrese el tercer valor: ");
    scanf("%i", &num3);

    printf("ingrese el cuarto valor: ");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    promedio = (float)suma / 4;

    printf("la suma de los valores es: ");
    printf("%i\n", suma);

    printf("el promedio de los valores es: ");
    printf("%.2f\n", promedio);
    getch();

    return 0;
}
