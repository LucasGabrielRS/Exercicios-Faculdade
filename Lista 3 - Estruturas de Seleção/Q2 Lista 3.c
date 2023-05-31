#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite outro número: ");
	scanf("%f", &num2);
	if(num1 == num2){
		printf("Os números são iguais");
	}		
	else if(num1 > num2){
		printf("O número %.0f é maior que o número %.0f", num1, num2);
		
	}
	else{
		printf("O número %.0f é maior que o número %.0f", num2, num1);
	}
	return 0;
}
