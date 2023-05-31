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
	printf("\nA soma de todos os números ímpares que são múltiplos de 3 e que se encontram no conjunto dos números de 1 até 500 é: %d.", soma);
	return 0;

}
