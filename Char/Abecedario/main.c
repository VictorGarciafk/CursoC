#include<stdio.h>

int main(){
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
    
    return 0;
}