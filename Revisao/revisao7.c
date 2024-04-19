#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ale(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(NULL)); 

    int pontos[10];


    for (int i = 0; i < 10; i++) {
        pontos[i] = ale(30, 50);
    }

    printf("Índice\tPontuação\tHistograma\n");
    for (int i = 1; i < 10; i++) {
        printf("%d\t%d\t\t", i, pontos[i]);
        for (int j = 0; j < pontos[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}