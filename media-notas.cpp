#include <stdio.h>

main(){
	float n1, n2, media;
	
	printf("Insira duas notas e veja a media:\n");
	
	printf("nota 1: ");
	scanf("%f", &n1);
	
	printf("nota 2: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	if (media < 6){
		printf("Voce esta de recuperacao!");
	}
	else if(media >= 6){
		printf("Voce passou!");
	}
	
	return 0;
}
