#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha;

	printf("Digite sua senha: ");
	scanf("%i", &senha);
	if(senha == 4531){
		printf("Acesso liberado!");
	}
	else{
		printf("Acesso negado!");
	}
	return 0;
}
