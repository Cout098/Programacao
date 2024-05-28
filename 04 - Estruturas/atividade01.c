#include <stdio.h>
#include <string.h>
/* struct Corpo
{
    char nome[20];
    float altura;
    float peso;
};
struct Corpo Joao; */

struct corpo
{
    char nome[20];
    float altura;
    float peso;
} joao;

struct casal
{
    struct corpo pessoa1;
    struct corpo pessoa2;    
} casais[6];

void preemcherCasais(struct casal casais[]){
    //Casal 1
    //Pessoa 1
    strcpy(casais[0].pessoa1.nome, "CARLOS");
    casais[0].pessoa1.altura = 1.50;
    casais[0].pessoa1.peso = 60.0;
    //Pessoa 2
    strcpy(casais[0].pessoa2.nome, "MARIA");
    casais[0].pessoa2.altura = 1.55;
    casais[0].pessoa2.peso = 61.0;

    //Casal 2
    //Pessoa 1
    strcpy(casais[1].pessoa1.nome, "ADALBERTO");
    casais[1].pessoa1.altura = 1.60;
    casais[1].pessoa1.peso = 70.0;
    //Pessoa 2
    strcpy(casais[1].pessoa2.nome, "JOAO");
    casais[1].pessoa2.altura = 1.65;
    casais[1].pessoa2.peso = 71.0;

    //Casal 3
    //Pessoa 1
    strcpy(casais[2].pessoa1.nome, "CLAUDIO");
    casais[2].pessoa1.altura = 1.70;
    casais[2].pessoa1.peso = 80.0;
    //Pessoa 2
    strcpy(casais[2].pessoa2.nome, "FERNANDA");
    casais[2].pessoa2.altura = 1.75;
    casais[2].pessoa2.peso = 81.0;

    //Casal 4
    //Pessoa 1
    strcpy(casais[3].pessoa1.nome, "ELIAS");
    casais[3].pessoa1.altura = 1.80;
    casais[3].pessoa1.peso = 90.0;
    //Pessoa 2
    strcpy(casais[3].pessoa2.nome, "PATRICIA");
    casais[3].pessoa2.altura = 1.85;
    casais[3].pessoa2.peso = 91.0;

    //Casal 5
    //Pessoa 1
    strcpy(casais[4].pessoa1.nome, "GLORIA");
    casais[4].pessoa1.altura = 1.40;
    casais[4].pessoa1.peso = 50.0;
    //Pessoa 2
    strcpy(casais[4].pessoa2.nome, "GERALDO");
    casais[4].pessoa2.altura = 1.45;
    casais[4].pessoa2.peso = 51.0;

    //Casal 6
    //Pessoa 1
    strcpy(casais[5].pessoa1.nome, "AMANDA");
    casais[5].pessoa1.altura = 1.90;
    casais[5].pessoa1.peso = 55.0;
    //Pessoa 2
    strcpy(casais[5].pessoa2.nome, "FERNANDO");
    casais[5].pessoa2.altura = 1.95;
    casais[5].pessoa2.peso = 56.0;
}

void exibirCasais(struct casal casais[]){
    for (int i = 0; i < 6; i++)
    {
        printf("\n-------------CASAL-[%d]-------------\n", i + 1);
        printf("------------Pessoa-[1]-------------\n");
        printf("\tNOME.....:  %s\n", casais[i].pessoa1.nome);
        printf("\tALTURA...:  %.2f\n", casais[i].pessoa1.altura);
        printf("\tPESO.....:  %.2f\n", casais[i].pessoa1.peso);
        printf("------------Pessoa-[2]-------------\n");
        printf("\tNOME.....:  %s\n", casais[i].pessoa2.nome);
        printf("\tALTURA...:  %.2f\n", casais[i].pessoa2.altura);
        printf("\tPESO.....:  %.2f\n", casais[i].pessoa2.peso);
    }
    
}

int main(){

    preemcherCasais(casais);
    exibirCasais(casais);

    return 0;
}

