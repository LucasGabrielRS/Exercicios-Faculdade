#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma = 0, i = 0;
	for(i = 1; i <= 500; i++){
		if (i % 2 != 0 && i % 3 == 0){
			soma += i;
		}
	}
	printf("\nA soma de todos os n�meros �mpares que s�o m�ltiplos de 3 e que se encontram no conjunto dos n�meros de 1 at� 500 �: %d.", soma);
	return 0;

}
