/* 2) Escreva uma funð§ð£o em C que calcule a soma dos elementos de um vetor de inteiros usando
ponteiros. A funð§ð£o deve ter o seguinte protð³tipo:
int soma_vetor( int *vetor, int tamanho);
No programa principal, crie um vetor de inteiros, leia seus valores do usuð¡rio, chame a funð§ð£o
soma_vetor e exiba o resultado. */

#include <stdio.h>
#include <locale.h>

int soma_vetor(int *vetor, int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    
    return soma;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int tamanho, soma = 0;

    printf("Escolha o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    
    soma = soma_vetor(vetor, tamanho);

    printf("A soma dos elementos do vetor é %d: ", soma);

    return 0;
}