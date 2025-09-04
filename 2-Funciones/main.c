#include<stdio.h>
#include<string.h>

void primerEjercicio();
void mayorque(int v1, int v2);
void segundoEjercicio();
void hombreOMujer(char g);
void tercerEjercicio();
void valorMasAlto(int v1, int v2, int v3);
void cuartoEjercicio();
int AreaCuadrado(int lado);
void quintoEjercicio();
int areaRectangulo(int lado1, int lado2);

int main(){

    //primerEjercicio();
    //segundoEjercicio();
    //tercerEjercicio();
    //cuartoEjercicio();
    quintoEjercicio();

    return 0;
}

//*-*-*-*-*-Funciones con parametro-*-*-*-*-*

//lee dos valores e imprime cual de los dos es mas alto
void primerEjercicio(){
    int valor1, valor2;

    printf("ingrese el primer valor: ");
    scanf("%i", &valor1);

    printf("ingrese el segundo valor: ");
    scanf("%i", &valor2);

    //pasamos como parametro los dos valores obtenidos para que pueda hacer la comparacion de cual de los dos es mayor
    mayorque(valor1, valor2);
}

//ingresamos el valor v1 y v2 en base a los valores puesto en la main
//no usamos punteros ya que no vamos a sobrescribir ninguna de la informacion de los enteros entrante
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

//lee un caracter y regresa si el caracter es de hombre, mujer o ninguno de los dos
void segundoEjercicio(){
    char genero;

    printf("ingrese su genero con una H para hombre o una M para mujer(opcion otros en progreso): ");
    scanf(" %c", &genero);

    hombreOMujer(genero);
}

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

//lee 3 valores e imprime cual es mas alto
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

//*-*-*-*-*-Funciones con retorno de valor-*-*-*-*-*

//lee el valor del lado de un cuadrado y calcula su area
void cuartoEjercicio(){
    int ladoCuadrado, area;

    printf("ingresa el valor del lado del cuadrado: ");
    scanf("%i", &ladoCuadrado);

    //llamamos a la funcion enviando un entero como parametro y esperamos que retorne un valor
    //que se almacenara en la variable "area"
    area = AreaCuadrado(ladoCuadrado);

    printf("el area del cuadrado es: %i", area);
    
}

int AreaCuadrado(int lado){
    int a = 0;

    a = lado*lado;

    //returnamos el resultado
    return a;
}

//calcular el area de dos rectangulos e imprimir cual de los dos rectangulos tiene el area mas grande
void quintoEjercicio(){
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