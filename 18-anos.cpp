#include <stdio.h>

main(){
	int ano, idade;
	
	printf("Escreva um numero\n");
	scanf("%d", &ano);
	
	idade = (2026 - ano);
	
	if (idade < 16) {
	    printf("Voce nao pode fazer nada legalmente");
	}   
	else if (idade >= 16 && idade < 18) { 
	    printf("Voce pode votar mas nao dirigir e beber");
	}
	else if (idade >= 18) {
	    printf("Voce pode fazer tudo legalmente");
	}

	return 0;
}
