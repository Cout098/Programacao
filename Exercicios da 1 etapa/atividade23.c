#include <stdio.h>

void fib(int n) {
    int a = 0, b = 1;
    printf("%d %d", a, b);
    for (int i = 2; i < n; i++) {
        int prox = a + b;
        printf(" %d", prox);
        a = b;
        b = prox;
    }
}

int main() {
    int n;
    printf("Digite um numero entre 0 e 46:\n");
    scanf("%d", &n);
    
    if (n > 0 && n < 46) {
        fib(n);
    } else{
        printf("Numero invalido");
    }
    
    return 0;
}
