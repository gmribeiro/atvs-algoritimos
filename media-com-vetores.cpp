#include <stdio.h>

int main() {

    float media[5], soma;
    int i;

    for(i=0;i<5;i++){

        printf("Qual é o %d numero?\n", i+1);
        scanf("%f", &media[i]);

    }

    printf("\n\nA média final é:\n");
    
    for(i=0;i<5;i++){

        soma += media[i];
    }

    printf("%2.f\n", soma/5);

    return 0;
}