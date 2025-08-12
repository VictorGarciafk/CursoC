#include<stdio.h>
#include<string.h>

int contarletras();
int compararCaracteres();
int copiarNombre();
int CombinarNombreApellido();

int main(){
    //contarletras();
    //compararCaracteres();
    //copiarNombre();
    //CombinarNombreApellido();

    return 0;
}

//usamos la funcion strlen para contar la cantidad de caracteres que hay en la cacena de caracteres que ingresamos por teclado
int contarletras(){
    char palabra[31];
    int cantpalabra;
    printf("ingrese una palabra: ");
    scanf(" %31[^\n]", palabra);

    //contamos la cantidad de caracteres que tiene la palabra que ingresamos
    cantpalabra = strlen(palabra);

    printf("la palabra %s tiene %i letras", palabra, cantpalabra);

    return 0;
}

//usamos la funcion strcmp para comparar dos cadenas de carateres y ver si ambas son iguales o si una tiene mas caracteres que la otra
int compararCaracteres(){
    char buff[31];
    char nombre1[31];
    char nombre2[31];
    int comp = 0;
    
    printf("inserte el primer nombre: ");
    scanf(" %30[^\n]", buff);
    strcpy(nombre1,buff);

    printf("inserte el segundo nombre: ");
    scanf(" %30[^\n]", buff);
    strcpy(nombre2,buff);

    comp = strcmp(nombre1, nombre2);

    //si los dos nombres son iguales entonces nos arrojara como resultado 0
    if (comp == 0)
    {
        printf("los dos nombres son iguales");

    //si nos arroja un valor mayor a 0 quiere decir que le nombre1 es mayor alfabeticamente
    }else if (comp > 0)
    {
        printf("los nombres no son iguales y el nombre %s es mayor alfabeticamente que el nombre %s", nombre1, nombre2);
    
    //si nos arroja un valor menor a 0 quiere decir que le nombre2 es mayor alfabeticamente
    }else{
        printf("los nombres no son iguales y el nombre %s es mayor alfabeticamente que el nombre %s", nombre2, nombre1);
    }

    return 0;
}

//usamos la funcion strcpy para copiar los datos de una cadena de caracteres y pasarlos a otra variable
int copiarNombre(){

    char nombre1[31];
    char nombre2[31];
    char nombre3[31];
    int resul = 0;
    int Bcontinuar = 0;

    do
    {
        printf("ingrese el primer nombre: ");
        scanf(" %30[^\n]", nombre1);

        printf("ingrese el segundo nombre: ");
        scanf(" %30[^\n]", nombre2);

        if (strlen(nombre1) == 0 || strlen(nombre2) == 0)
        {
            printf("!Favor de no dejar los campos vacios\n");
            Bcontinuar = 1;
        }else if (strlen(nombre1) == strlen(nombre2))
        {
            printf("!Ambos nombres son igual de largos, favor de escribir otros nombres\n");
            Bcontinuar = 1;
        }else
        {
            Bcontinuar = 0;
        }
        
    } while (Bcontinuar != 0);
    

    if (strlen(nombre1) < strlen(nombre2))
    {
        strcpy(nombre3, nombre2);
        
    }else
    {
        strcpy(nombre3, nombre1);
    }
    
    

    printf("el nombre mas largo es: %s", nombre3);

    return 0;
}

//usamos la funcion strcat para concatenar la cadena de texto de una variable a otra, esta escribira despues de lo que sea que tenga la variable destino
int CombinarNombreApellido(){
    char nombre[31];
    char apellido[31];
    char nombreCompleto[62];

    printf("ingrese su nombre: ");
    scanf(" %30[^\n]", nombre);

    printf("ingrese su Apellido: ");
    scanf(" %30[^\n]", apellido);

    strcat(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellido);

    printf("El nombre completo es: %s", nombreCompleto);
    return 0;
}

