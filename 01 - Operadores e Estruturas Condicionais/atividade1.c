#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

	printf("\nAceitamos 0 como falso e 1 como verdadeiro\n");
    printf("\nAplicando operadores relacionais:\n");
    printf("%d e igual a %d = %d\n", num1, num2, num1 == num2);
    printf("%d e diferente de %d = %d\n", num1, num2, num1 != num2);
    printf("%d e maior que %d = %d\n", num1, num2, num1 > num2);
    printf("%d e menor que %d = %d\n", num1, num2, num1 < num2);
    printf("%d e maior igul a %d = %d\n", num1, num2, num1 >= num2);
    printf("%d e menor igual a  %d = %d\n", num1, num2, num1 <= num2);

    return 0;
}
