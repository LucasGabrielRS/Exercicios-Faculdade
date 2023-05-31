#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");
	float capacidade_tanque, qtd_abaste, dist, cm, aut;

    printf("Digite a capacidade do tanque em litros: ");
    scanf("%f", &capacidade_tanque);
    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &qtd_abaste);
    printf("Digite a quilometragem percorrida desde o ultimo abastecimento: ");
    scanf("%f", &dist);

    
    cm = dist / qtd_abaste;
    aut = cm * capacidade_tanque;

    
    printf("Consumo medio: %.2f km/l\n", cm);
    printf("Autonomia: %.2f km\n", aut);

    return 0;
}
