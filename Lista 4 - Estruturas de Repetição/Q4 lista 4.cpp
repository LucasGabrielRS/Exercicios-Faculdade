#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1, quantP;
	
	while (num != 0){
		printf("Digite um numero: ");
		scanf("%i", &num);
		
		if (num%2==0 && num != 0){
			quantP++;
		}
	}
	printf("A quantidade de numeros pares foi %i", quantP);
}
