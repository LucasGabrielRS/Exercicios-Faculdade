#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, aux;
	printf("\nInsira tr�s n�meros em ordem crescente.");
	printf("\nInsira o primeiro n�mero: ");
	scanf("%d", &n1);
	printf("\nInsira o segundo n�mero: ");
	scanf("%d", &n2);
	printf("\nInsira o terceiro n�mero: ");
	scanf("%d", &n3);
	printf("\nAgora insira outro n�mero (n�o precisa estar em ordem): ");
	scanf("%d", &n4);
	if (n1 > n4) {
		aux = n1;
		n1 = n4;
		n4 = aux;
	}
	if (n2 > n4) {
		aux = n2;
		n2 = n4;
		n4 = aux;
	}
	if (n3 > n4) {
		aux = n3;
		n3 = n4;
		n4 = aux;
	}
	printf("\n\nN�meros em ordem decrescente: %d, %d, %d e %d.", n4, n3, n2, n1);
	return 0;
}
