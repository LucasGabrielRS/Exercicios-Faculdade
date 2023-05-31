#include <stdio.h>

int main(){
	float nota1, nota2, nota3, nota4, media;
	printf("\nInsira a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nInsira a terceira nota: ");
	scanf("%f", &nota3);
	printf("\nInsira a quarta nota: ");
	scanf("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("\n\nMedia: %.1f", media);
	if (media < 6.5){
		printf("\nReprovado.");
	} 
	else printf("\nAprovado.");
	return 0;
}
