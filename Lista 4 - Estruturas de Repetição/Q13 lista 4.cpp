#include <stdio.h>

int main()
{
	float numero, soma = 0;
	
	printf("Digite -1 para sair\n\n");
	do
	{
		printf("\nInsira um numero: ");
		scanf("%f", &numero);
		if (numero != -1 && numero > 5) 
		{
			soma += numero;
		}
	} 
	while (numero != -1);
	
	printf("\nA soma dos numeros maiores do que 5 inseridos foi %.1f.",  soma);
		
	return 0;
}
