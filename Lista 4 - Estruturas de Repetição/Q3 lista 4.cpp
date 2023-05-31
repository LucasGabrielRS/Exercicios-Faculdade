#include <stdio.h>
#include <locale.h>
			

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota,somanota, idade, aluno, quant_acima = 0, quant_maisde20 = 0, media_final;
	
	for (aluno=0; aluno<3; aluno++){
		printf("Digite sua nota: \n");
		scanf("%i", &nota);
		if (nota >= 70){
			quant_acima++;
		}
		
		printf("Digite sua idade: \n");
		scanf("%i", &idade);
		
		if (idade >= 20){
			quant_maisde20++;
		}
		
		somanota += nota;
	} 
	
	printf("\n%i alunos estão com nota acima de 70.", quant_acima);
	printf("\n%i alunos tem mais de 20 anos.", quant_maisde20);
	printf("\nA media final da turma foi %i", somanota/aluno);
}
