#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    do {
        printf("Digite um valor inteiro ou 0 para sair: ");
        scanf("%d", &x);

        if (x != 0) {
            int i; 
            int soma = 0;

            if (x % 2 == 0) {
                for (i = 0; i < 5; i++) {
                    soma += x + (2 * i);
                }
            } else {
                x++;
                for (i = 0; i < 5; i++) {
                    soma += x + (2 * i);
                }
            }

            printf("%d\n", soma);
        }
    } while (x != 0);

    return 0;
}
