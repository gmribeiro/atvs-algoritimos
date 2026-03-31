#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, r = 0;
    char sn;
    
    do {
        printf("\nEscreva um numero\n");
        scanf("%f", &a);
        
        printf("\nEscreva mais um numero:\n");
        scanf("%f", &b);
        
        r += (a + b);
        
        printf("\nDeseja parar? [S/N]:\n");
        scanf(" %c", &sn);
        
    } while (sn == 'n');
    
    printf("O resultado da soma é: %f", r);

    return 0;
}