#include <stdio.h>

int main(){
	float num1, num2, num3, soma1, soma2, soma3;

   
   printf("Digite o primeiro n�mero: ");
   scanf("%f", &num1);
   printf("Digite o segundo n�mero: ");
   scanf("%f", &num2);
   printf("Digite o terceiro n�mero: ");
   scanf("%f", &num3);

   soma1 = num1;
   soma2 = num1 + num2;
   soma3 = num1 + num2 + num3;

   printf("A soma parcial dos dois primeiros n�meros �: %.2f\n", soma2);
   printf("A soma parcial dos tr�s n�meros �: %.2f\n", soma3);
}
