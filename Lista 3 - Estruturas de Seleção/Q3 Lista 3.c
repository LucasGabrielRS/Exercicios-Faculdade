#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    printf("Digite tr�s n�meros diferentes: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    printf("Os n�meros em ordem crescente s�o: %d %d %d\n", num1, num2, num3);
    return 0;		
}
