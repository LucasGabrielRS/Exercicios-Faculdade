#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite outro n�mero: ");
	scanf("%f", &num2);
	if(num1 == num2){
		printf("Os n�meros s�o iguais");
	}		
	else if(num1 > num2){
		printf("O n�mero %.0f � maior que o n�mero %.0f", num1, num2);
		
	}
	else{
		printf("O n�mero %.0f � maior que o n�mero %.0f", num2, num1);
	}
	return 0;
}
