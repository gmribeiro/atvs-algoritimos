#include <stdio.h>

int somar(int n1, int n2){
    return n1+n2;
}

void nada(){

    printf("---------");
}

int main() {

    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int i, n;

    for(i=0;i<3;i++){
        
        for(n=0;n<3;n++){
            printf("|%d|", matriz[i][n]);
        }

        printf("\n");
        nada();
        printf("\n");
    }

    

    return 0;
}