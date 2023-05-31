#include <stdio.h>

int main(){
	float num1, num2, num3, soma1, soma2, soma3;

   
   printf("Digite o primeiro número: ");
   scanf("%f", &num1);
   printf("Digite o segundo número: ");
   scanf("%f", &num2);
   printf("Digite o terceiro número: ");
   scanf("%f", &num3);

   soma1 = num1;
   soma2 = num1 + num2;
   soma3 = num1 + num2 + num3;

   printf("A soma parcial dos dois primeiros números é: %.2f\n", soma2);
   printf("A soma parcial dos três números é: %.2f\n", soma3);
}
