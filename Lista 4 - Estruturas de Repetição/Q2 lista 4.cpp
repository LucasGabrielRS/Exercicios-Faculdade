#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int media, num, somap=0, somai=0, qtds=0, qtdsp=0, qtdsi=0 ;
	
	do 
	{
		printf("Digite um numero: \n");
		scanf("%i", &num);
		if (num == 0) continue;
		
		if (num % 2 == 0){
			qtdsp++;
			somap += num;
		}
		
		if (num % 2 != 0){
			qtdsi++;
			somai += num;
		}
		
		
	}
	while ((qtdsi + qtdsp)!= 5);
	
	
	if (qtdsp > 0){
	
		printf("A soma dos n�meros positivos: %i\n", somap);
		printf("A m�dia dos n�meros positivos: %i\n", (somap/qtdsp));
	}
		
	if (qtdsi > 0){
	
		printf("A soma dos n�meros negativos: %i\n", somai);
		printf("A m�dia dos n�meros negativos: %i", (somai/qtdsi));
	}
	
	
}
