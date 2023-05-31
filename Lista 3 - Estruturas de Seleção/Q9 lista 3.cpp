#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int voto , cand1 =  0, cand2 = 0, cand3 = 0, cand4 = 0, nulo = 0, branco = 0, total_votos;
	
	do {
		printf("Insira seu voto: ");
		scanf("%i", &voto);
		if (voto == 1) cand1++;
		else if (voto == 2) cand2++;
		else if (voto == 3) cand3++;
		else if (voto == 4) cand4++;
		else if (voto == 5) nulo++;
		else if (voto == 6) branco++;
		
	} while (voto != 0);
	total_votos = cand1 + cand2 + cand3 + cand4 + nulo + branco;
	printf("\nForam registrados %i votos", total_votos);
	printf("\nCandidato 1: %.0i votos. %.1f%% do total.", cand1, (cand1/(float)total_votos) * 100);
	printf("\nCandidato 2: %.0i votos. %.1f%% do total.", cand2, (cand2/(float)total_votos) * 100);
	printf("\nCandidato 3: %.0i votos. %.1f%% do total.", cand3, (cand3/(float)total_votos) * 100);
	printf("\nCandidato 4: %.0i votos. %.1f%% do total.", cand4, (cand4/(float)total_votos) * 100);
	printf("\nNulo: %.0i votos. %.1f%% do total.", nulo, (nulo/(float)total_votos) * 100);
	printf("\nBranco: %.0f votos. %.1f%% do total.", branco, (branco/(float)total_votos) * 100);
	return 0;
}
