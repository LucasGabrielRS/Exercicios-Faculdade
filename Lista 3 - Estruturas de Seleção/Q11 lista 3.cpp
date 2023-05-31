#include <stdio.h>
#include <locale.h>
	
struct Pais {
	char nome[20];
	int ouro, prata, bronze, pontos;
		
};	


int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Pais paises[3];
	struct Pais aux;
	int i;
	
	for (i = 0; i < 3; i++){
		printf("\nInsira o nome do %d pais: ", i+1);
		scanf("%s", paises[i].nome);
		printf("\nInsira a quantidade de medalhas de ouro do %s: ", paises[i].nome);
		scanf("%d", &paises[i].ouro);
		printf("\nInsira a quantidade de medalhas de prata do %s: ", paises[i].nome);
		scanf("%d", &paises[i].prata);
		printf("\nInsira a quantidade de medalhas de bronze do %s: ", paises[i].nome);
		scanf("%d", &paises[i].bronze);
		paises[i].pontos = (paises[i].ouro * 3) + (paises[i].prata * 2) + paises[i].bronze;
		printf("\nO Pais %s fez %d pontos.", paises[i].nome, paises[i].pontos);
	}
	
	if (paises[0].pontos < paises[2].pontos){
			aux = paises[0];
			paises[0] = paises[2];
			paises[2] = aux;
		}
		if (paises[0].pontos < paises[1].pontos){
			aux = paises[0];
			paises[0] = paises[1];
			paises[1] = aux;
		}
		if (paises[1].pontos < paises[2].pontos){
			aux = paises[0];
			paises[0] = paises[2];
			paises[2] = aux;
		}
	
	printf("\n\nCLASSIFICAÇÃO");
	for (i = 0; i<=2; i++){
		printf("\n%d Lugar: %s com %d pontos.", i+1, paises[i].nome, paises[i].pontos);

	}
	return 0;	
}
