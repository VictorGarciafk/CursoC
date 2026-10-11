#include<stdio.h>

//la ruta de donde quieren que se guarde el documento
//Nota: cambiarla si se quiere utilizar en sus equipos
#define RUTA "C:\\Users\\user\\Desktop\\mi texto.txt"

void escribirArchivo();
void agregarArchivo();
void lecturaArchivo();

int main(){
    int choice;

    void(*archivos[3])() = {
        escribirArchivo,
        agregarArchivo,
        lecturaArchivo
    };

    printf("selecciona una de las 3 sig opciones:\n");
    printf("1.Escritura\n2.Agregar\n3.lectura\n");
    if (scanf("%d", &choice) != 1)
    {
        printf("entrada no valida\n");
        return 1;
    }
    
    choice--;

    if (choice >=0 && choice < 3)
    {
        archivos[choice]();
    }else{
        printf("opcion no encontrada");
    }
}

void escribirArchivo(){
    FILE *archivo;
    //Creamos el archivo si no existe y lo abrimos en modo escritura
    //creo el archivo en el escritorio
    archivo = fopen(RUTA, "w");

    if (archivo == NULL)
    {
        printf("Error, no se pudo acceder al archivo");
        return;
    }

    //insertamos un texto(si el archivo existe y abrimos el archivo en modo escritura se sobrescribira el contenido con el nuevo
    fprintf(archivo, "soy el primer texto\n");

    fclose(archivo);
}

void agregarArchivo(){
    FILE *archivo;
    //abrimos el archivo en modo agregar
    archivo = fopen(RUTA, "a");

    if (archivo == NULL)
    {
        printf("Error, no se pudo acceder al archivo");
        return;
    }
    
    //para evitar que se sobrescriba el archivo debemos abrir el archivo en modo agregar
    fprintf(archivo, "...\nsoy el segundo texto");

    fclose(archivo);
}

void lecturaArchivo(){
    FILE *archivo;

    //abrimos el archivo en modo lectura
    archivo = fopen(RUTA, "r");

    if (archivo == NULL)
    {
        printf("Error, no se pudo acceder al archivo");
        return;
    }

    char storeStrings[100];

    //guardamos el contenido dentro de la cadena de caracteres y la imprimimos
    while(fgets(storeStrings, 100, archivo)){
        printf("%s", storeStrings);
    }

    fclose(archivo);
}