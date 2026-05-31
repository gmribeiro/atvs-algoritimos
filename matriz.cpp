#include <stdio.h>

int main(){

    int matriz[3][3] = {{1,2,3}, {2,4,6}, {3,6,9}};
    int i, n;

    for(i=0;i<3;i++) {

        for (n=0; n<3; n++) {

            printf("|%d|", matriz[i][n]);

        }
        
        printf("\n");

    }
    

    return 0;
}