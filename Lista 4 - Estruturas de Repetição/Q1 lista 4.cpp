#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int media, num, somap=0, soman=0, qtds=0, qtdsp=0, qtdsn=0 ;
	
	do 
	{
		printf("Digite um numero: \n");
		scanf("%i", &num);
		if (num == 0) continue;
		
		if (num>0){
			qtdsp++;
			somap += num;
		}
		
		if (num<0){
			qtdsn++;
			soman += num;
		}
		
		
	}
	while ((qtdsn + qtdsp)!= 5);
	
	
	if (qtdsp > 0){
	
		printf("A soma dos números positivos: %i\n", somap);
		printf("A média dos números positivos: %i\n", (somap/qtdsp));
	}
		
	if (qtdsn > 0){
	
		printf("A soma dos números negativos: %i\n", soman);
		printf("A média dos números negativos: %i", (soman/qtdsn));
	}
	
	
}
