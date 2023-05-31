#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int codigo, qtd_produto;
	float preco_uni, preco_totalsemdesc, preco_desc, desc, preco_final;
	printf("Digite o codigo do produto: ");
	scanf("%i", &codigo);
	printf("Digite a quantidade comprada desse produto: ");
	scanf("%i", &qtd_produto);
	if(codigo >= 1 && codigo <= 10){
		preco_uni = 10;
	}
	else if(codigo >= 11 && codigo <= 20){
		preco_uni = 15;
	}
	else if(codigo >= 21 && codigo <= 30){
		preco_uni = 20;
}
	else if(codigo >= 31 && codigo <= 40){
		preco_uni = 30;
}
	preco_totalsemdesc = preco_uni * qtd_produto;
	printf("O preço unitario do produto é R$ %.2f", preco_uni);
	printf("\npreco final sem desconto foi R$ %.2f", preco_totalsemdesc);
	
	if(preco_totalsemdesc <= 250){
		desc = 0.05;
		preco_desc = preco_totalsemdesc * desc;
	}
	else if(preco_totalsemdesc >= 250 && preco_totalsemdesc <= 500){
		desc = 0.10;
		preco_desc = preco_totalsemdesc * desc;
	}
	else if(preco_totalsemdesc > 500){
		desc = 0.15;
		preco_desc = preco_totalsemdesc * desc;
	}
	preco_final = preco_totalsemdesc - preco_desc;
	printf("\nO seu desconto será de %.1f", desc);
	printf("\nSeu valor total com desconto será de R$%.1f", preco_final);
	
	return 0;
}
