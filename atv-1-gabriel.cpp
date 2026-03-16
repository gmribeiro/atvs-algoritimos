#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1, n2, n3;
	printf("Digite um número:\n");
	scanf("%f", &n1);
	printf("Digite mais um número:\n");
	scanf("%f", &n2);
	printf("Digite mais um número:\n");
	scanf("%f", &n3);
	printf("Resultado: %f\n", (n1 + n2 + n3) / 3.0);
	return 0;
}
