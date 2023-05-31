#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	
	float preco_dist, preco_fabrica,precoTotal, precoImposto, pct_dist, imposto;
	printf("Digite o preço de fabrica de um carro: ");
	scanf("%f", &preco_fabrica);
	pct_dist = 0.12;
	imposto = 0.45;
	preco_dist = preco_fabrica * pct_dist;
	precoImposto = preco_fabrica * imposto;
	precoTotal = preco_dist + preco_fabrica + precoImposto;
	printf("Valor total do carro: R$ %.2f", precoTotal);
	return 0;
}
