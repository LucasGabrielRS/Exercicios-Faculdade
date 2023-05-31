#include <stdio.h>

int main(){
	int num1, num2, num3, soma, produto;
	printf("\nDigite 3 numeros inteiros: \n");
	scanf("%i%i%i", &num1, &num2, &num3);
	
	soma = num1 + num2 + num3;
	produto = num1 * num2 * num3;
	printf("\nA soma eh: %i", soma);
	printf("\n\nO produto eh: %i\n", produto);
}
