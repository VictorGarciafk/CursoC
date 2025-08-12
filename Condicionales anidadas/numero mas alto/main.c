#include<stdio.h>
#include<conio.h>

int main(){

    int n1, n2, n3;

    printf("ingrese el primer numero: ");
    scanf("%i", &n1);

    printf("ingrese el segundo numero: ");
    scanf("%i", &n2);

    printf("ingrese el tercer numero: ");
    scanf("%i", &n3);

    printf("El numero mas alto es: ");
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

    getch();

    return 0;
}