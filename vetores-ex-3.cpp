#include <stdio.h>

#define tamanho 4

int main() {
	
	int i;
	int a[tamanho];
	int b[tamanho];
	int c= 0;
	
	for (i=0; i<tamanho; i++){
		printf("\nEscreva o valor %d\n", i+ 1);
		scanf("%d", &a[i]);
	}
	
	for (i=0; i<tamanho; i++){
		printf("\nEscreva o valor %d\n", i+ 1);
		scanf("%d", &b[i]);
	}
	
	for (i=0; i<tamanho; i++){
		c = a[i] + b[i];
		printf("\nO valor %d de c e %d\n", i + 1, c);
				
	}
	
	return 0;
}
