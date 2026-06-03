#include <stdio.h>

int main(){

    char letras[5];
    int i;

    for(i=0;i<5;i++){

        printf("Escreva uma letra:\n");
        scanf(" %c", &letras[i]);

    }


    printf("\n\nElementos de traz pra frente:\n");
    for(i=4;i>=0;i--){

        printf("%c", letras[i]);

    }

    return 0;
}