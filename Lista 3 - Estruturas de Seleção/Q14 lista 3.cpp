#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float tinto = 0.0, branco = 0.0, rose = 0.0, total_vinhos = 0.0;
	char vinho = 'x';
	printf("\nLevantamento do estoque de vinhos\nOpções: 'T', 'B', 'R' e 'F' para finalizar.\n\n\n");
	while (vinho != 'F'){
		printf("\n\nInsira o vinho: ");
		scanf("%c%*c", &vinho);
		if (vinho == 'T') tinto++;
		else if (vinho == 'B') branco++;
		else if (vinho == 'R') rose++;
	}
	
	total_vinhos = tinto + branco + rose;
	printf("\n\n\n\nFIM.");
	printf("\n\n\nForam registrados %.0f vinhos.", total_vinhos);
	printf("\n\nTinto: %.0f vinhos. %.1f%% do total.", tinto, (tinto/total_vinhos) * 100);
	printf("\n\nBranco 2: %.0f vinhos. %.1f%% do total.", branco, (branco/total_vinhos) * 100);
	printf("\n\nRosê: %.0f vinhos. %.1f%% do total.\n\n", rose, (rose/total_vinhos) * 100);
	return 0;
}
