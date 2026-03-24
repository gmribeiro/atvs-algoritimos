#include <stdio.h>

main(){
	float n;
	
	printf("Insira um numero:\n");
	
	printf("numero: ");
	scanf("%f", &n);
	
	if(n > 10){
		printf("Esse numero e maior que 10");
	}
	else if (n == 10){
		printf("Esse numero e 10");
	}
	else if (n < 10){
		printf("Esse numero e menor que 10");
	}
	else {
		printf("Valor invalido");
	}
	
	return 0;
}
