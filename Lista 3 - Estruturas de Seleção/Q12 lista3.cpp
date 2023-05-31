#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qntd = 0, soma = 0, numero = 0;
	float media;
	
	do {
		if (numero % 2 == 0 && numero != 0){
			soma += numero;
			qntd++;
		}
		printf("Insira um numero par: ");
		scanf("%d", &numero);
	} while (numero != 0);
	media = soma / (float)qntd;
	printf("\n\n\nForam inseridos %d números pares.", qntd);
	printf("\nA média foi de %.2f.", media);
	return 0;
}
