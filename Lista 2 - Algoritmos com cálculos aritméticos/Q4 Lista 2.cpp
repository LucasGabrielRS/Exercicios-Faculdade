#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	float tempC, tempF;
	printf("Escreva uma temperaturo em graus celsius: ");
	scanf("%f", &tempC);
	tempF = ((9/5)* tempC + 32);
	printf("Essa temperatura em Fahrenheit é: %.1f", tempF);
	return 0; 
}
