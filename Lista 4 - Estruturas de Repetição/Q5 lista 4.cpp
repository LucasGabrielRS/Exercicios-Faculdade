#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1,soma, quantP;
	
	while (num != 0){
		printf("Digite um numero: ");
		scanf("%i", &num);
		
		soma += num;
	}
	printf("A soma dos numeros foi %i", soma);
}
