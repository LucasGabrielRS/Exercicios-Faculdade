#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1, somaP, quantP;
	
	while (num != 0){
		printf("Digite um numero: ");
		scanf("%i", &num);
		
		if(num>0){
			somaP += num;
	}
	}
	printf("A soma dos numeros positivos foi %i", somaP);
}
