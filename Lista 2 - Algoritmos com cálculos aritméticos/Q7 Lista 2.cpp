#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	
	float qtdLatas, litroPorLata, precoLata, cadalitropinta, qtdComodo, tamComodo, custoTotal; 
	precoLata = 50;	
	litroPorLata = 5;
	cadalitropinta = 3;
	qtdComodo = 6;
	tamComodo = 10;
	qtdLatas = (tamComodo * qtdComodo)/(cadalitropinta * litroPorLata);
	custoTotal = qtdLatas * precoLata;
	printf("O numero de latas necessárias para pintar os 6 comodos é: %.0f Latas\nO preco total para pintar será: R$%.2f", qtdLatas, custoTotal);
	return 0;
}
