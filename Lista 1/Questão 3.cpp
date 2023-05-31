#include <stdio.h>

int main()
{
	char l1,l2,l3,l4,l5;
	printf("\nDigite apenas 5 letras:");
	scanf("%c", &l1);
	scanf("%c", &l2);
	scanf("%c", &l3);
	scanf("%c", &l4);
	scanf("%c", &l5);
	printf("As letras digitadas foram: %c, %c, %c, %c, %c,", l1,l2,l3,l4,l5);
	printf("\nLetra 1: %c \nLetra 2: %c \nLetra 3: %c \nLetra 4: %c \nLetra 5: %c", l1,l2,l3,l4,l5 );
	return 0;
}

