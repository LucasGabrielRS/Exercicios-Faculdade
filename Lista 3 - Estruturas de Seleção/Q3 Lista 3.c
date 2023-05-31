#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    printf("Digite três números diferentes: ");
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
    
    printf("Os números em ordem crescente são: %d %d %d\n", num1, num2, num3);
    return 0;		
}
