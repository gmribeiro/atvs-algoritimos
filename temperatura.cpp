#include <stdio.h>
#include <ctype.h>

	float ctof(float temp){
		return (1.8 * temp) + 32;
	}

int main() {
	
	float t;
	char i;
	
	do {
	
		printf("Insira uma temperatura em celsius\n");
		scanf("%f", &t);
		
		printf("Sua temperatura em convertida e \n");
		printf("%2.f\n\n", ctof(t));
		
		while (getchar() != '\n'); 
		
		printf("\n\nGostaria de continuar? [s/n]\n");
		scanf("%c", &i);
	
	} while (tolower(i) != 'n');
		
}
