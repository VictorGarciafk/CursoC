#include<stdio.h>
#include<conio.h>

int main(){

    float num1, num2;

    printf("ingresa el primer numero: ");
    scanf("%f", &num1);

    printf("ingresa el segundo numero: ");
    scanf("%f", &num2);

    printf("el numero mas alto es: ");
    if(num1 > num2){
        printf("%.2f", num1);
    }else{
        printf("%.2f", num2);
    }
    getch();

    return 0;
}
