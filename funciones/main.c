#include<stdio.h>
#include<string.h>

void primerEjercicio();
void mayorque(int v1, int v2);
void segundoEjercicio();
void hombreOMujer(char g);
void tercerEjercicio();
void valorMasAlto(int v1, int v2, int v3);

int main(){

    //primerEjercicio();
    //segundoEjercicio();
    //tercerEjercicio();

    return 0;
}

void primerEjercicio(){
    //primer ejercicio
    int valor1, valor2;

    printf("ingrese el primer valor: ");
    scanf("%i", &valor1);

    printf("ingrese el segundo valor: ");
    scanf("%i", &valor2);

    mayorque(valor1, valor2);
}

//primer ejercicio
//ingresamos el valor v1 y v2 en base a los valores puesto en la main
//no usamos punteros ya que no vamos a sobrescribir ninguna de la infomracion de los enteros entrante
void mayorque(int v1, int v2){

    if (v1 > v2)
    {
        printf("el valor mas alto es: %i", v1);
    }else if (v2 > v1)
    {
        printf("el valor mas alto es: %i", v2);
    }else{
        printf("ambos valores son iguales");
    }
}


void segundoEjercicio(){
    char genero;

    printf("ingrese su genero con una H para hombre o una M para mujer(opcion otros en progreso): ");
    scanf(" %c", &genero);

    hombreOMujer(genero);
}

//segundo ejercicio
//ingresamos un char el cual debe ser H o M
void hombreOMujer(char g){
    int gAscii = (int)g;

    if ((int)g == 72 || (int)g == 104)
    {
        printf("selecciono la opcion hombre");
    }else if ((int)g == 77 || (int)g == 109)
    {
        printf("selecciono la opcion Mujer");
    }else{
        printf("no se reconoce la opcion proporcionada");
    }
}


void tercerEjercicio(){
    int valor1, valor2, valor3;

    printf("ingrese el primer valor: ");
    scanf("%i", &valor1);

    printf("ingrese el segundo valor: ");
    scanf("%i", &valor2);

    printf("ingrese el tercer valor: ");
    scanf("%i", &valor3);

    valorMasAlto(valor1, valor2, valor3);
}

//tercer ejercicio
//ingresamos 3 valores enteros y los comparamos para que imprima cual de los 3 valores es el mas alto
void valorMasAlto(int v1, int v2, int v3){
    
    if (v1 > v2 && v1 > v3)
    {
        printf("el valor mas alto es %i", v1);
    }
    else if (v2 > v3)
    {
        printf("el valor mas alto es %i", v2);
    }
    else
    {
        printf("el valor mas alto es %i", v3);
    }
    
}
