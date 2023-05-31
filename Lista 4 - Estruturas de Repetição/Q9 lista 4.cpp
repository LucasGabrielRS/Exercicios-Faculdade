#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num,quantnum = 0, quantP = 0, quantN = 0;
	
	do {
		printf("Digite um número: ");
		scanf("%i",&num);
		quantnum++;
		
		if (num<0){
			quantN++;
		}
		else {
			quantP++;
		}
	}
	while (quantnum!=5);
	
	if (quantP>0){
	
	printf("A quantidade de positivos: %i\n", quantP);
	}
	if (quantN>0){
	
	printf("A quantidade de negativos: %i", quantN);
	}
}
