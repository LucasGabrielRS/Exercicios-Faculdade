#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	float altura, maior_altura = 0, menor_altura = 99.9, soma_m = 0.0, quant_h = 0, quant_m = 0;
	char sexo;
	
	for (contador = 1; contador <= 50; contador++){
		printf("Digite sua altura: ");
		scanf("%f", &altura);
		printf("\nInsira o sexo('H'/'M'): ");
		scanf(" %c%*c", &sexo);
		if (altura > maior_altura) maior_altura = altura;
		if (menor_altura > altura) menor_altura = altura;
		if (sexo == 'H'){
			quant_h += 1.0;
		}
		else if (sexo == 'M'){
			quant_m += 1.0;
			soma_m += altura;
		}
	}
	printf("\n\n\nA maior altura do grupo é %.2f.", maior_altura);
	printf("\nA menor altura do grupo é %.2f.", menor_altura);
	printf("\nA média das alturas das mulheres é %.2f.", soma_m/quant_m);
	printf("\nO número de homens foi de %.0f e a diferença percentual para o número de mulheres foi de %.1f%%", quant_h, (((quant_h * 100)/50) - ((quant_m * 100)/50)));
	
	return 0;
}
