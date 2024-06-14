/* ) Defina uma struct chamada Produto que contém três campos: um código (int), um nome (string)
e um preço (float). Escreva uma função em C que receba um ponteiro para uma struct Produto e
um novo preço, e altere o preço do produto. A função deve ter o seguinte protótipo:
void altera_preco(Produto *produto, float novo_preco);
No programa principal, crie uma struct Produto, leia os dados do produto do usuário, chame a
função altera_preco e exiba os dados do produto após a alteração.
 */

#include <stdio.h>
#include <locale.h>

typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;



int main(){

    return 0;
}