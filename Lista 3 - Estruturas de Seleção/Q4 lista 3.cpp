#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, aux;
	printf("\nInsira três números em ordem crescente.");
	printf("\nInsira o primeiro número: ");
	scanf("%d", &n1);
	printf("\nInsira o segundo número: ");
	scanf("%d", &n2);
	printf("\nInsira o terceiro número: ");
	scanf("%d", &n3);
	printf("\nAgora insira outro número (não precisa estar em ordem): ");
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
	printf("\n\nNúmeros em ordem decrescente: %d, %d, %d e %d.", n4, n3, n2, n1);
	return 0;
}
