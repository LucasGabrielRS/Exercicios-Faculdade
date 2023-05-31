#include <stdio.h>

int main(){
	char c1,c2,c3;
	printf("\nDigite 1 numero de 3 digitos: ");
	scanf("%c%c%c", &c1, &c2, &c3);
	printf("\nUnidade: %c\nDezena: %c\nCentena: %c", c3,c2,c1);
	return 0;
}
