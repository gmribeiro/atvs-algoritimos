#include <stdio.h>


int main() {

    int n, i =0;

    printf("\nQuantos algarismos vai ter o vetor?\n");
    scanf("%d", &n);

    int v[n];

    do{
    
    printf("\nQual é o %d algarismo?\n", i+1);
    scanf("%d", &v[i]);
    
    i++;
    
    } while (i<n);

    printf("\nOs %d algarismos do vetor são:\n", n);

    for(i = 0;i<n;i++) {

        printf("\n%d\n", v[i]);

    }


    return 0;
}