#include <stdio.h>
#include <stdlib.h>

int main(){
	float base, altura;
	printf("Qual é o tamanho da base do triangulo:\n");
	scanf("%f", &base);
	printf("Qual é a altura do triangulo:\n");
	scanf("%f", &altura);
	printf("A area do quadrado é: %f\n", (base*altura) / 2);
	return 0;
}
