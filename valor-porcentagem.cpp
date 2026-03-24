#include <stdio.h>

main() {
	
	float valor;
	int opcao;
	
	printf("Escreva um numero:\n");
	scanf("%f", &valor);
	
	printf("Agora ajuste o valor em 1 - 15 2 - 20% 3 - 30%\n");
	scanf("%d", &opcao);
	
	if (opcao == 1){
		printf("%.2f", valor*=1.15);
	}
	if (opcao == 2){
		printf("%.2f", valor*=1.20);
	}
	if (opcao == 3){
		printf("%.2f", valor*=1.30);
	}
	
	return 0;
}
