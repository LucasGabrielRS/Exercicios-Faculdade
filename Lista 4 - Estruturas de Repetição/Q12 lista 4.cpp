#include <stdio.h>

int main()
{
	float numero, soma = 0;
	
	printf("Digite -1 para sair\n\n");
	do
	{
		printf("\nInsira um numero: ");
		scanf("%f", &numero);
		if (numero != -1) 
		{
			soma += numero;
		}
	} 
	while (numero != -1);
	
	printf("\nA soma dos numeros inseridos foi %.1f.",  soma);
		
	return 0;
}
