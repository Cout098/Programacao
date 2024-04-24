#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, media = 0;

    printf("Digite as notas: \n");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2)/2;

    if (media >= 9){
        printf("O conceito é A. \nAPROVADO");
    } else if (media >= 7.5 && media < 9){
        printf("O conceito é B. \nAPROVADO");
    } else if (media >= 6 && media < 7.5){
        printf("O conceito é C. \nAPROVADO");
    } else if (media >= 4 && media < 6){
        printf("O conceito é D. \nREPROVADO");
    } else {
        printf("O conceito é E. \nREPROVADO");
    }
    

    return 0;
    
}