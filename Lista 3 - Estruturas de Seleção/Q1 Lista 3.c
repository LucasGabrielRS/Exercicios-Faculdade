#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media, nota4;
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3)/3;
	printf("Sua média foi: %.1f", media);
	
	if(media >= 7){
		printf("\nAprovado");
	}
	else if(media < 7 && media > 3){
		printf("\nExame");
	}
	else{
		printf("\nReprovado");
		nota4 = 7 - media;
		printf("\nVoce precisa de %.1f", nota4);
	}
	return 0;	
		
}
