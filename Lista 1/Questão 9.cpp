#include <stdio.h>

int main()
{
	int num1, num2;
	float resto;
	printf("\nDigite 2 numeros: ");
	scanf("%i%i", &num1,&num2);
	resto = num1 % num2;
	printf("Os numeros lidos sao: %i e %i\nO resto da divisao eh: %.1f", num1, num2, resto);
	return 0;
}
