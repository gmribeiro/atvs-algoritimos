#include <stdio.h>

main(){
	int n;
	
	printf("Escreva um numero\n");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("O numero e par");
	}	
	else {
		printf("O numero e impar");
	}
	
	return 0;
}
