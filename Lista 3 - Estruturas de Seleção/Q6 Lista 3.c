#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf ("Digite sua idade: ");
	scanf("%i", &idade);
	if(idade >= 5 && idade <= 7){
		printf("Você está na categoria infantil");
	}
	else if(idade >= 8 && idade <= 10){
		printf("Você está na categoria juvenil");
	}
	else if(idade >= 11 && idade <= 15){
		printf("Você está na categoria adolescente");
	}
	else if(idade >= 16 && idade <= 30){
		printf("Você está na categoria adulta");
	}
	else if(idade > 30){
		printf("Você está na categoria senior");
	}
	
}
