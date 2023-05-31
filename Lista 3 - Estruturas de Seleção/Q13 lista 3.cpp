#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero_imaginado, chute = 1, tentativas = 0;
	printf("\nInsira o número imaginado: ");
	scanf("%d", &numero_imaginado);
	while(chute != numero_imaginado){
		printf("\n\nDê um chute: ");
		scanf("%d", &chute);
		tentativas++;
		if (chute > numero_imaginado) printf("\nChute foi alto!");
		else if (chute < numero_imaginado) printf("\nChute foi baixo!");
	}
	printf("\n\n\n\nVocê acertou em %d tentativas!\n\n", tentativas);
	return 0;

}
