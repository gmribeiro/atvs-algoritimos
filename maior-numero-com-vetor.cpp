#include <stdio.h>


int main(){

    int list[5];
    int i, menor=9999999999999, maior=0;


    for(i=0;i<5;i++){

        printf("Qual é o %d valor?\n", i+1);
        scanf("%d", &list[i]);

    }

    for(i=0;i<5;i++){

        if(list[i]>maior){
            
            maior = list[i];

        }

    }

    for(i=0;i<5;i++){

        if(list[i]<menor){
            
            menor = list[i];

        }

    }

    printf("\n\nO maior numero é %d \n", maior);
    printf("\n\nO menor numero é %d \n", menor);

    return 0;
}