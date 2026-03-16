#include <stdio.h>
#include <stdlib.h>

int main(){
	float r;
	const float pi = 3.14159;
	printf("Qual é o tamanho da base do triangulo:\n");
	scanf("%f", &r);
	printf("A area do circulo é: %f\n", (pi * (r*r)));
	return 0;
}
