#include<stdio.h>

void digitos();
void impuestos();
void alumnoBecado();
void numeroMasAlto();
void tipoNum();
void calificacion();
void numMenorDiez();
void primerTrimestre();
void navidadFecha();

int main(){

    //digitos();
    //impuestos();
    //alumnoBecado();

    //numeroMasAlto();
    //tipoNum();
    //calificacion();

    //numMenorDiez();
    //primerTrimestre();
    navidadFecha();

    return 0;
}

//*-*-*-*-*-Condicionales-*-*-*-*-*

//captura un numero y se determina si es de un digito o dos
void digitos(){
    int numero;

    printf("ingrese un numero del 1 al 99: ");
    scanf("%i", &numero);
    
    if (numero >= 10)
    {
        printf("es un numero de dos digitos");
    }else{
        printf("es un numero de un digito");
    }
}

//captura un ingreso y determina si dicha persona paga impuestos o no
void impuestos(){
    float sueldo;

    printf("ingrese el sueldo: ");
    scanf("%f", &sueldo);

    if(sueldo > 3000){
        printf("Esta persona debe abonar impuestos");
    }else{
        printf("Esta persona no requiere abonar impuestos");
    }
}

//captura las 3 notas y calcula el promedio para verificar si el alumno fue becado o no
void alumnoBecado(){
    float nota1, nota2, nota3, promedio;

    printf("ingrese la primera nota del alumno: ");
    scanf("%f", &nota1);

    printf("ingrese la segunda nota del alumno: ");
    scanf("%f", &nota2);

    printf("ingrese la segunda nota del alumno: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3)/3;
    printf("promedio: %.2f\n", promedio);

    if (promedio >= 7)
    {
        printf("Becado");
    }else{
        printf("no Becado");
    }
}

//*-*-*-*-*-Condicionales anidadas-*-*-*-*-*

//captura tres numeros y compara cual es el mas alto
void numeroMasAlto(){
    
    int n1, n2, n3;

    printf("ingrese el primer numero: ");
    scanf("%i", &n1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &n2);

    printf("ingrese el tercer numero: ");
    scanf("%i", &n3);

    printf("El numero mas alto es: ");

    //los if anidados son un if "padre" que prosigue un if "hijo"
    //para acceder al if "hijo" se debe cumplir o no cumplir la condicion del if "Padre"
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%i", n1);
        }else{
            printf("%i", n3);
        }

    }else{
        if (n2 > n3)
        {
            printf("%i", n2);
        }else{
            printf("%i", n3);
        }
    }
}

//captura un numero entero y arroja si el numero es positivo, negativo o neutro
void tipoNum(){
    int numero;

    printf("ingrese un numero entero: ");
    scanf("%i", &numero);

    if (numero > 0)
    {
        printf("el numero es positivo");
    }else if(numero == 0){
        printf("el numero es neutro");
    }else{
        printf("el numero es negativo");
    }
}

//captura la cantidad de preguntas y respuestas correctas y determina el nivel
void calificacion(){
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
}

//*-*-*-*-*-Condicionales compuestas-*-*-*-*-*

//captura 3 numeros y busca si todos o algunos de los numeros es menor que 10
void numMenorDiez(){
    int num1, num2, num3;

    printf("ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("ingrese el tercer numero: ");
    scanf("%i", &num3);

    //las condicionales compuestas es cuando se tiene dos o mas condiciones en un if
    //si los signos son || significa que con una de las condiciones que se cumpla dara como verdadero
    //si los signos son && significa que debe cumplir con todas las condiciones para que sea verdadero
    if (num1 < 10 || num2 < 10 || num3 < 10)
    {
        printf("Alguno o todos los numeros son menor que 10");
    }else{
        printf("todos los numeros son mayor que 10");
    }
}

//carga una fecha y determina si corresponde al primer trimestre del mes
void primerTrimestre(){
    int dia, mes, anio;

    printf("ingrese el dia: ");
    scanf("%i", &dia);

    printf("ingrese el mes: ");
    scanf("%i", &mes);

    printf("ingrese el año: ");
    scanf("%i", &anio);

    if (mes >= 1 && mes <= 3)
    {
        printf("corresponde al primer trimestre del año");
    }else{
        printf("no corresponde al primer trimestre del año");
    }
}

//captura la fecha, compara si la fecha coinciden con navidad
void navidadFecha(){
    int dia, mes, anio;

    printf("ingrese el dia: ");
    scanf("%i", &dia);

    printf("ingrese el mes: ");
    scanf("%i", &mes);

    printf("ingrese el año: ");
    scanf("%i", &anio);

    if (mes == 12 && dia == 25)
    {
        printf("Feliz navidad");
    }else{
        printf("Aun no es navidad");
    }
}