#include <stdio.h>

main(){
	float n;
	
	printf("Insira um numero para ver se ele e negativo:\n");
	
	printf("numero: ");
	scanf("%f", &n);
	
	if (n < 0){
		printf("Esse numero e negativo");
	}
	else if (n >= 0){
		printf("Esse numero e positivo");
	}
	else{
		printf("Valor invalido");
	}
	
	
	
	return 0;
}
