#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	float preco, total;
	int qtd;
	
	printf("Digite a quantidade do produto: ");
	scanf("%i", &qtd);
	printf("Digite o preço do produto: ");
	scanf("%f", &preco);
	total = qtd * preco;
	printf("O total deu: %.2f", total);
	return 0;
	
}
