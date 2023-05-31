#include <stdio.h>

int main()
{
	int idade;
	float altura;
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	printf("Digite sua altura:");
	scanf("%f", &altura);
	printf("A idade digita foi = %i ", idade);
	printf("Sua altura eh %.2f", altura);
	return 0;
}

