#include <stdio.h>


int main(){

    int matriz[3][3];
    int i, n;

    for(i=0;i<3;i++){

        for(n=0;n<3;n++){

            printf("\nQual é o elemento da linha %d e coluna %d?\n", i, n);
            scanf("%d", &matriz[i][n]);

        }

    }

    for(i=0;i<3;i++){

        for(n=0;n<3;n++){

            printf("|%d|", matriz[i][n]);

        }

        printf("\n");
        
    }


    return 0;
}