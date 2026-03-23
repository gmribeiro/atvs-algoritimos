#include <stdio.h>

main(){
	int idade;
	
	printf("Insira sua idade:\n");
	
	printf("Idade: ");
	scanf("%d", &idade);
	
	if(idade > 70){
		printf("Voce e idoso");
	}
	else if(21 <= idade && 70 >= idade){
		printf("Voce e adulto");
	}
	else if(idade < 21){
		printf("Voce e jovem");
	}
	else {
		printf("Dados invalidos");
	}
	
	return 0;
}
