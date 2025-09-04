#include<stdio.h>
#include<string.h>

void abecedario();
void suma();
void helloWorld();
void edadMasAlta();
void vocalesMinusculas();

int main(){

    //abecedario();
    //suma();

    //helloWorld();
    //edadMasAlta();
    vocalesMinusculas();

    return 0;
}

//*-*-*-*-*-Variable Char-*-*-*-*-*

//imprime el abecedario tanto en mayuscula como en minuscula
void abecedario(){
    //la variable char permite almacenar un caracter unico
    //almacena un numero entero en base al codigo ASCII
    char abc;
    int i;

    printf("el abecedario en mayuscula es: ");

    for (i = 65; i <= 90; i++)
    {
        abc = i;
        printf(" %c -", abc);
    }

     printf("\nel abecedario en minuscula es: ");
    
    for (i = 97; i <= 122; i++)
    {
        abc = i;
        printf(" %c -", abc);
    }
}

//suma n cantidad de numeros, solicita confirmacion cada vez que ingrese un numero
void suma(){
    int valor, suma;
    char confirmacion;
    suma = 0;

    do
    {
        printf("ingresa un valor: ");
        scanf("%i", &valor);

        suma += valor;

        printf("Desea agregar otro valor?(S/N): ");
        //se utiliza %c de caracter como formato que espere un dato tipo Char
        scanf(" %c", &confirmacion);

        while(confirmacion !=78 && confirmacion !=110 && confirmacion !=83 && confirmacion !=115)
        {
            printf("Favor de ingresar una de las opciones(S/N): ");
            scanf(" %c", &confirmacion);
        }

    } while (confirmacion == 's' || confirmacion == 'S');
    
    printf("La suma de todos los valores es: %i", suma);
}

//*-*-*-*-*-array Char-*-*-*-*-*

//imprime el mensaje "hola mundo"
void helloWorld(){
    //cuando se tiene una cadena de caracteres de 10, se debe poner 11 para asignar a un caracter de control
    char frase[11] = "hola mundo";

    //"%s" = string
    printf("%s", frase);
}

//captura dos nombres y edades e imprime quien es la persona mayor
void edadMasAlta(){
    char nombre1[35], nombre2[35];
    int edad1, edad2;

    printf("ingrese el nombre de la primera persona: ");
    //usamos %[^\n] para obtener como parametro una cadena de caracteres
    scanf(" %[^\n]", nombre1);

    printf("ingrese la edad de la primera persona: ");
    scanf("%i", &edad1);

    printf("ingrese el nombre de la segunda persona: ");
    scanf(" %[^\n]", nombre2);

    printf("ingrese la edad de la primera persona: ");
    scanf("%i", &edad2);

    if (edad1 > edad2)
    {
        printf("la persona con mayor edad es: %s", nombre1);
    }else if (edad2 > edad1)
    {
        printf("la persona con mayor edad es: %s", nombre2);
    }else
    {
        printf("la persona %s y la persona %s tienen la misma edad", nombre1, nombre2);
    }
}

//captura una palabra y cuenta cuantas vocales tiene
void vocalesMinusculas(){
    char palabra[31];
    int i, vcount, bContinuar;
    bContinuar = 0;
    //memset rellena el bloque de memoria con un valor en especifico, en este caso \0 que usamos para limpiar la variable
    memset(palabra, '\0', sizeof(palabra));

    printf("ingrese una sola palabra en minuscula: ");
    scanf("%30s", palabra);

    while (bContinuar == 0)
    {
        i = 0;
        vcount = 0;
        bContinuar = 1;
        while (palabra[i] != '\0')
        {
            //verificamos que contenga solo minusculas
            if ((int)palabra[i] >= 97 && (int)palabra[i] <= 122)
            {
                //verificamos si contiene una vocal
                if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
                {
                    vcount ++;
                }
            }else{
                printf("favor de ingresar una sola palabra con solo minusculas: ");
                bContinuar = 0;
                memset(palabra, '\0', sizeof(palabra));
                scanf("%30s", palabra);
                break;
            }
            i++;
        }
    }
    
    printf("la cantidad de vocales en la palabra %s es: %i", palabra, vcount);
}
