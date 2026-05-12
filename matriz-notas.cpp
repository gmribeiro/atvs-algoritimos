#include <stdio.h>
main()
{
 	float Notas[3][5];
    	int I, J;
 	for(I = 0; I < 3; I++)
    	{
    		printf("\nAluno %d\n", I);
    		for(J = 0; J < 5; J++)
    		{
    			printf("Nota %d: ", J);
    			scanf("%f", &Notas[I][J]);
		}  
	}
	for(I = 0; I < 3; I++) 
	{
		printf("\n\nAluno %d\n ", I);
		for(J = 0; J < 5; J++)
    	{
    		printf("\nNota %d: %.2f ", J, 
                                     Notas[I][J]);    		
		}  
	}
}

