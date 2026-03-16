#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor, taxa;
	int tempo;
	printf("Qual é o valor total do bem?\n");
	scanf("%f", &valor);
	printf("Qual é o tempo que vai ter pra pagar?\n");
	scanf("%f", &tempo);
	printf("Qual é a taxa que vai ter pra pagar?\n");
	scanf("%d", &taxa);
	printf("O valor das prestações é: %f \n", (valor + (valor * (taxa / 100) * tempo)));
	return 0;
}
