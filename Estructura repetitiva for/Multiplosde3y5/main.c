#include<stdio.h>

int main(){
    int i, mult5 = 0, mult3 = 0, numero;
    
    for (i = 1 ; i <= 10 ; i++){

        printf("ingrese el valor #%i: ", i);
        scanf("%i", &numero);

        if ((numero % 5) == 0)
        {
            mult5++;
        }
        
        if ((numero % 3) == 0)
        {
            mult3++;
        }
    }

    printf("la cantidad de numeros que son multiplos de 3 son: %i\n", mult3);
    printf("la cantidad de numeros que son multiplos de 5 son: %i", mult5);


    return 0;
}