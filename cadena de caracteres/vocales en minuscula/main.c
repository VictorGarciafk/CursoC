#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
    char palabra[31] = "papitas";
    int i, vcount, bContinuar;
    bContinuar = 0;
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
    
    

    return 0;
}