#include<stdio.h>

void multiplos();
void triangulos();
void cuentaCien();
void promedio();

int main(){

    //multiplos();
    //triangulos();
    //cuentaCien();
    promedio();

    return 0;
}

//*-*-*-*-*-Ciclo for-*-*-*-*-*

//lee 10 valores y determina cuantos son multiplos de 3 y 5
void multiplos(){
    int i, mult5 = 0, mult3 = 0, numero;
    
    //un for permite repetir un bloque una n cantidad de veces
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
}

//lee una n cantidad de triangulos y nos muestra cuantros triangulos su area fue mayor a 12
void triangulos(){
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
}

//*-*-*-*-*-Ciclo while-*-*-*-*-*

//imprime en consola los numeros del 1 al 100
void cuentaCien(){
    int x = 1;

    //el while es un ciclo que se repite hasta que la condicion dada sea falsa
    while (x <= 100)
    {
        printf("%i\n", x);
        x += 1;
    }
}

//*-*-*-*-*-Ciclo dowhile-*-*-*-*-*

//suma n cantidad de numeros hasta que lea un 0 y obtiene el promedio
void promedio(){
    int contador, suma, promedio, valor;

    suma = contador = 0;

    //un do while asegura que el ciclo while va a ingresar almenos una vez aunque la condicion no se cumpla al inicio
    do{
        printf("ingrese el valor a sumar: ");
        scanf("%i", &valor);

        if (valor != 0)
        {
            suma += valor;
            contador++;
        }
    }while (valor !=0);    

    promedio = suma/contador;

    printf("el promedio de todos los valores ingresados es: %i", promedio);
}
