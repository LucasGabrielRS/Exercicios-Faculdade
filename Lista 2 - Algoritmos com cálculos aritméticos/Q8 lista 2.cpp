#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	
	float valor_prestacao, acrescimo, desconto, valorComAcrescimo, valorComDesconto;
	printf("Digite o valor da prestação: ");
	scanf("%f", &valor_prestacao);
	acrescimo = 1.15;
	desconto = 0.75;
	valorComAcrescimo = valor_prestacao * acrescimo;
	valorComDesconto = valorComAcrescimo * desconto;
	printf("%.2f", valorComDesconto);
	return 0;
}
