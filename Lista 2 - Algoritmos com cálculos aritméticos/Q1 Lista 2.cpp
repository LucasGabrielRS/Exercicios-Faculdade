#include <stdio.h>
#include <math.h>

int main (){
	int num,quad;
	printf("Digite um numero: ");
	scanf("%i", &num);
	quad = pow(num,2);
	printf("O quadrado do numero: %i eh %i", num, quad);
	return 0;
}
