#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, p1, p2, p3;
	printf("Qual é a primeira nota?\n");
	scanf("%f", &n1);
	printf("Qual é o peso da primeira?\n");
	scanf("%f", &p1);
	printf("Qual é a primeira nota?\n");
	scanf("%f", &n2);
	printf("Qual é o peso da primeira?\n");
	scanf("%f", &p2);
	printf("Qual é a primeira nota?\n");
	scanf("%f", &n3);
	printf("Qual é o peso da primeira?\n");
	scanf("%f", &p3);
	printf("A media ponderada é: \n %f", ((n1*p1) + (n2*p2) + (n3*p3) / (p1 + p2 + p3)));
	return 0;
}