/* Escreva uma função em C que conte o número de ocorrências de uma letra específica em uma
palavra usando ponteiros. A função deve ter o seguinte protótipo:
int conta_letra(char *palavra, char letra);
No programa principal, leia uma palavra (string) e uma letra (caracter) do usuário, chame a função
conta_letra e exiba o número de ocorrências da letra na palavra.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_letra(char *palavra, char letra){
    int indiceLetra;
    int numOcorrecia = 0, contador;

    contador = strlen(palavra);
    for ( indiceLetra = 0; indiceLetra < contador; indiceLetra++)
    {
        if (letra == palavra[indiceLetra])
        {
            numOcorrecia++;
        }
    }
    return numOcorrecia;
}

int main(){
    char palavra[60];
    char letra;

    printf("Digite uma palavra: ");
    gets(palavra);
    fflush(stdin);
    printf("Digite a letra que gostaria de contar: ");
    scanf("%c",&letra);
    fflush(stdin);

    printf("O numero de vezes que a letra %c apareceu %d na palavra", letra, conta_letra(palavra, letra));

   return 0;
}