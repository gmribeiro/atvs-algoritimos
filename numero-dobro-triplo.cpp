#include <stdio.h>

main(){
	float n;
	
	printf("Escreva um numero\n");
	scanf("%f", &n);
	
	if (n > 10){
		printf("%f", n*2);
	}
	if (n < 10){
		printf("%f", n*3);
	}
	
	
	return 0;
}
