/* Defina uma struct chamada Aluno que contém dois campos: um nome (string) e uma nota
(float). Escreva uma funç?o em C que receba um ponteiro para um vetor de structs Aluno e o
número de alunos, e retorne a média das notas. A funç?o deve ter o seguinte protótipo:
float calcula_media(Aluno *alunos, int num_alunos);
No programa principal, crie um vetor de structs Aluno, leia os dados dos alunos do usuário, chame
a funç?o calcula_media e exiba a média */

#include <stdio.h>
#include <locale.h>

typedef struct
{
    char aluno[50];
    float nota;
} Aluno;

void cadastra_aluno(Aluno *alunos, int num_alunos){
    for (int i = 0; i < num_alunos; i++)
    {
        printf("Digite o nome do Aluno: ");
        fflush(stdin);
        gets(alunos[i].aluno);
        printf("Digite a nota do Aluno: ");
        scanf("%f", &alunos[i].nota);
    }
}

float calcula_media(Aluno *alunos, int num_alunos)
{
    float soma = 0, media = 0;
    for (int i = 0; i < num_alunos; i++)
    {
        soma += alunos[i].nota;
    }
    media = soma/num_alunos;

    return media;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int num_alunos;
    float media = 0;

    printf("Defina a quantos alunos gotaria de cadastrar: ");
    scanf("%d", &num_alunos);
    fflush(stdin);

    Aluno alunos[num_alunos];

    cadastra_aluno(alunos,num_alunos);

    media = calcula_media(alunos, num_alunos);

    printf("A media das notas dos alunos é: %.2f", media);

    return 0;
}