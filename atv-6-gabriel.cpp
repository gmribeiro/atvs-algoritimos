#include <stdio.h>
#include <stdlib.h>

int main(){
	float comprimento, largura, altura;
	printf("Qual é a comprimento?\n");
	scanf("%f", &comprimento);
	printf("Qual é a altura?\n");
	scanf("%f", &largura);
	printf("Qual é a altura?\n");
	scanf("%f", &altura);
	printf("O volume é: %f \n", (comprimento * largura * altura));
	return 0;
}
