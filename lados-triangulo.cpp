#include <stdio.h>

main(){
	float l1, l2, l3;
	
	printf("Insire 3 lados de um triangulo:\n");
	
	printf("Lado 1: ");
	scanf("%f", &l1);
	
	printf("Lado 2: ");
	scanf("%f", &l2);
	
	printf("Lado 3: ");
	scanf("%f", &l3);
	
	if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
		printf("Esses lados formam um triangulo ");
		if (l1 == l2 and l2 != l3 ||  l1 == l3 and l3 != l2 || l2 == l3 and l3 != l1){
			printf("Isosceles");
		}
		
		else if (l1 == l2 and l2 == l3){
			printf("Equilatero");
		}
		
		else if(l1 != l2 and l2 != l3){
			printf("Escaleno");
		}
	}
	else{
		printf("Esses lados nao formam um triangulo");
	}
	
	
	
	return 0;
}
