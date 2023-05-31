#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1, quantnega = 0, quantP;
	
	while (num != 0){
		printf("Digite um numero: ");
		scanf("%i", &num);
		
		if(num<0){
			quantnega++;
	}
	}
	printf("A quantidade de numeros negativos foi de %i", quantnega);
}
