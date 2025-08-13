#include<stdio.h>
#include<string.h>

void primerEjercicio();
int AreaCuadrado(int lado);
void segundoEjercicio();
int areaRectangulo(int lado1, int lado2);

int main(){

    //primerEjercicio();

    segundoEjercicio();

    return 0;
}

void primerEjercicio(){
    int ladoCuadrado, area;

    printf("ingresa el valor del lado del cuadrado: ");
    scanf("%i", &ladoCuadrado);

    area = AreaCuadrado(ladoCuadrado);

    printf("el area del cuadrado es: %i", area);
    
}

//primer ejercicio
int AreaCuadrado(int lado){
    int a = 0;

    a = lado*lado;

    return a;
}

//calcular el area de dos rectangulos e imprimir cual de los dos rectangulos tiene el area mas grande
void segundoEjercicio(){
    int lado1, lado2, i;
    int area[3];

    for (i = 0; i < 2; i++)
    {
        printf("ingrese el primer lado del rectangulo #%i: ", (i+1));
        scanf("%i", &lado1);

        printf("ingrese el segundo lado del rectangulo #%i: ", (i+1));
        scanf("%i", &lado2);

        area[i] = areaRectangulo(lado1, lado2);
        printf("el area del rectangulo #%i es: %i", (i+1), area[i]);

        printf("\n\n");
    }
    
    if (area[0] > area[1])
    {
        printf("El area del rectangulo mas grande es: %i", area[0]);
    }else if (area[1] > area[0])
    {
        printf("El area del rectangulo mas grande es: %i", area[1]);
    }else{
        printf("El area de ambos rectangulos son igual de grandes: %i", area[0]);
    }
    
    
}

int areaRectangulo(int lado1, int lado2){
    int a;
    a = lado1 * lado2;
    
    return a;
}