#include <stdio.h>

main() {
	printf("Escreva dois numeros:\n");
	int a, b, temp;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a > b){
		printf("Os valores foram trocados\n");
		temp = a;
		a = b;
		b = temp;
		printf("A: %d B: %d",a, b);
	}
	else{
		printf("O val de A nao e maior que o de B\n");
		printf("A: %d B: %d", a, b);
	}
	return 0;
}
