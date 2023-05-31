#include <stdio.h>

int main(){
	float nota1, nota2, nota3, nota4, nota5, media, soma;
	printf("Digite 5 notas: ");
	
	scanf("%f%f%f%f%f", &nota1, &nota2,&nota3,&nota4,&nota5);
	soma = nota1 + nota2 + nota3 + nota4 + nota5;
	media = soma/5;
	printf("A soma dos numeros eh: %f\nA media das notas foi: %f",soma,media);
}
