#include <stdio.h>

int main() {
	
	int x, i;
	
	printf("Quantas medias tem no sistema\n");
	scanf("%d", &x);
	
	float md[x], soma = 0, media;
	
	printf("\nCalculo de media escolar\n");
	printf("\nInforme as %d medidas\n", x);
	
	for (i=0; i<x; i++){
		printf("\nMedida %d:\n", i+1);
		scanf("%f", &md[i]);
		soma += md[i];
	}
	
	media = soma / x;
	
	printf("\n\nA soma total é: %.2f\n\n", soma);
	
	printf("A media desses numeros é %.2f", media);
	
	return 0;
}
