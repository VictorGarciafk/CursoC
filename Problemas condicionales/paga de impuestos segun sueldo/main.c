#include<stdio.h>
#include<conio.h>

int main(){
    float sueldo;

    printf("ingrese el sueldo: ");
    scanf("%f", &sueldo);

    if(sueldo > 3000){
        printf("Esta persona debe abonar impuestos");
    }
    getch();

    return 0;
}
