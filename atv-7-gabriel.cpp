#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	printf("Qual é A?\n");
	scanf("%d", &a);
	printf("Qual é B?\n");
	scanf("%d", &b);
	printf("Qual é C?\n");
	scanf("%d", &c);
	printf("A expresão é : %d \n", ((a*a)+(b*b)+(c*c)));
	return 0;
}
