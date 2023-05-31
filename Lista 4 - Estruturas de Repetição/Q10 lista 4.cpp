#include <stdio.h>

int main()
{
	int valor, soma_positivos = 0, soma_negativos = 0, valores_lidos = 0;
	
	printf("Insira 5 numeros inteiros\n\n");
	do
	{
		printf("\nInsira um numero inteiro: ");
		scanf("%d", &valor);
		if (valor > 0) 
		{
			soma_positivos += valor;
		}
		else if (valor < 0)
		{
			soma_negativos += valor;
		}
		valores_lidos++;
	} 
	while (valores_lidos != 5);
	
	printf("\nA soma de todos os numeros positivos inseridos foi %d.",  soma_positivos);
	printf("\nA soma de todos os numeros negativos inseridos foi %d.",  soma_negativos);
	
	return 0;
}
