#include <stdio.h>

int main() {
    int numero;

    printf("Digite 0 para sair\n\n");

    do {
    	printf("\nInsira um numero: ");
		scanf("%d", &numero);
        if (numero != 0 && numero % 2 == 0) {
            printf("%d e par.\n", numero);
        }
    } while (numero != 0);

    return 0;
}
