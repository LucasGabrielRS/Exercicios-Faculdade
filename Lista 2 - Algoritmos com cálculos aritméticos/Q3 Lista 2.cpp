#include <stdio.h>
#include <math.h>
#include <locale.
int main (){h>

	setlocale(LC_ALL, "Portuguese");
	float baseA, baseB, lado, altura, area;
	printf("Digite a base maior de um trapezio: ");
	scanf("%f", &baseA);
	printf("Digite a base menor: ");
	scanf("%f", &baseB);
	printf("Digite o valor dos lados: ");
	scanf("%f", &lado);
	altura = (lado * sqrt(3));
	area = ((baseA + baseB) * altura)/2;
	printf("A area do trapezio é: %.2f", area);
	return 0;
}
