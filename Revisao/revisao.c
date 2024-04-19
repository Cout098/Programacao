#include <stdio.h>

int main() {
    int pontos[1][2];
    char times[2][3];

    int va=0, vc=0, e=0;

    times[0][0] = 'C';
    times[0][1] = 'A';
    times[0][2] = 'M';
    times[1][0] = 'C';
    times[1][1] = 'R';
    times[1][2] = 'U';
    
    

    printf("Resultados dos jogos:\n");
    for (int i = 1; i < 3; i++) {
        int gols1, gols2;
        printf("Quantos gols o CAM fez no jogo %d? ", i);
        scanf("%d", &gols1);
        printf("Quantos gols o CRU fez no jogo %d? ", i);
        scanf("%d", &gols2);

        if (gols1 > gols2){
            va++; 
        }else if (gols1 < gols2){
            vc++; 
        }else{
           e++; 
        }

    }
    
    pontos[0][0] = (va * 3) + e;
    pontos[1][0] = (vc * 3) + e;

    printf("\nPontuação final:\n");
    for (int i = 0; i < 2; i++) {
       for(int j = 0; j < 3; j++){
            printf("%c", times[i][j]);
       }
       printf("\t%d", pontos[i][0]);
      
    }


    return 0;
}