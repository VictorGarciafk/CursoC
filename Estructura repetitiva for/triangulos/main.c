#include<stdio.h>

int main(){
    int base, altura, n, sup12, i;
    float area;

    sup12 = 0;

    printf("cuantos triangulos ingresara?: ");
    scanf("%i", &n);

    for(i = 1; i <= n; i++){

        printf("ingrese la base del triangulo %i: ", i);
        scanf("%i", &base);

        printf("ingrese la Altura del triangulo %i: ", i);
        scanf("%i", &altura);

        area = ((float)base * (float)altura)/2;

        printf("el area del triangulo es: %.2f\n\n", area);

        if (area > 12)
        {
            sup12++;
        }
    }

    printf("la cantidad de triangulos que su area fue superior a 12 fue: %i", sup12);

    return 0;
}