#include<stdio.h>
#include<conio.h>

int main(){
    float num1, num2;

    printf("ingrese el primero valor: ");
    scanf("%f", &num1);

    printf("ingrese el segundo valor: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("la suma de los dos valores es: ");
        printf("%.2f\n", num1 + num2);

        printf("la diferencia de los dos valores es: ");
        printf("%.2f\n", num1 - num2);
    }else{
        printf("el producto de los dos valores es: ");
        printf("%.2f\n", num1 * num2);

        printf("la division de los dos valores es: ");
        printf("%.2f\n", num1 / num2);
    }
    getch();
    return 0;
}
