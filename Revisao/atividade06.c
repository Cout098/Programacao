#include <stdio.h>
#include <stdlib.h>

int main(){

    char t[2][3];
    int  p[2][1];
    int gol1, gol2, va = 0, vc = 0, e = 0;

    t[0][0] = 'C';
    t[0][1] = 'A';
    t[0][2] = 'M';
    t[1][0] = 'c';
    t[1][1] = 'r';
    t[1][2] = 'u';

    printf("Digite o saldo de gols do Atletico Mineiro:");
    scanf("%d", &gol1);
    printf("Digite o saldo de gols do Cruzeiro:");
    scanf("%d", &gol2);

    if(gol1>gol2){
        va++;
        printf("\nO vencedor é Atletico Mineiro");
    } else if(gol2 > gol1){
        vc++;
        printf("\n O vencedor é Cruzeiro");
    } else{
        printf("\nOs times empataram");
        e++;
    }

    p[0][0] = (va *3) + e;
    p[1][0] = (vc * 3) + e;

    printf("")
}