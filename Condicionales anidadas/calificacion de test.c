#include<stdio.h>

int main(){
    
    int preguntas, respCorrectas, calificacion;
    
    printf("ingrese la cantidad de preguntas: ");
    scanf("%i", &preguntas);

    printf("ingrese la cantidad de respuestas correctas: ");
    scanf("%i", &respCorrectas);

    calificacion = (respCorrectas*100)/preguntas;

    printf("el porcentaje de respuesta correctas es: %i\n", calificacion);

    if (calificacion >= 90)
    {
        printf("Nivel maximo");
    }else if (calificacion >= 75)
    {
        printf("Nivel medio");
    }else if (calificacion >= 50)
    {
        printf("Nivel Regular");
    }else{
        printf("Fuera de nivel"); 
    }
    
    return 0;
}