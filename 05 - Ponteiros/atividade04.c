/* ) Defina uma struct chamada Produto que contém três campos: um código (int), um nome (string)
e um preço (float). Escreva uma função em C que receba um ponteiro para uma struct Produto e
um novo preço, e altere o preço do produto. A função deve ter o seguinte protótipo:
void altera_preco(Produto *produto, float novo_preco);
No programa principal, crie uma struct Produto, leia os dados do produto do usuário, chame a
função altera_preco e exiba os dados do produto após a alteração.
 */

#include <stdio.h>
#include <locale.h>

#define NUM_PROD 1
typedef struct
{
    int codigo;
    char nome[30];
    float preco;
} Produto;

void cadastra_produto(Produto *produto){
    for (int indiceProduto = 0; indiceProduto < NUM_PROD; indiceProduto++)
    {
        printf("Digite o codigo produto: ");
        scanf("%d", &produto[indiceProduto].codigo);
        fflush(stdin);
        printf("Digite o nome do produto: ");
        gets(produto[indiceProduto].nome);
        fflush(stdin);
        printf("Digite o preço do produto: ");
        scanf("%f", &produto[indiceProduto].preco);
        fflush(stdin);
    }
}

int buscarProduto(){
    int codBuscado;
    printf("Qual o Produto você esta buscando?");
    printf("Buque o produto pelo cod.\n");
    scanf("%d", &codBuscado);

    return codBuscado;
}

void altera_preco(Produto *produto, float novo_preco){
    int indiceProduto;
    int cod_buscado;

    cod_buscado = buscarProduto();
    
    for (indiceProduto = 0; indiceProduto < NUM_PROD; indiceProduto++)
    {
        if (cod_buscado == produto[indiceProduto].codigo)
        {
            produto[indiceProduto].preco = novo_preco;
        }
    }
}

void exibir_produto(Produto *produto){
    int indiceProduto;
    int cod_buscado;

    cod_buscado = buscarProduto();

    for ( indiceProduto = 0; indiceProduto < NUM_PROD; indiceProduto++)
    {
        if (cod_buscado == produto[indiceProduto].codigo)
        {
            printf("Produto: %d\n", produto[indiceProduto].codigo);
            printf("Produto: %s\n", produto[indiceProduto].nome);
            printf("Preço: %.2f\n", produto[indiceProduto].preco);
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    Produto produto[NUM_PROD];
    float novo_preco = 0;
    int opc;

    do
    {
        printf("Escolha uma opção: \n");
        printf("1 - Cadastrar Produto.\n");
        printf("2 - Alterar Preços.\n");
        printf("3 - Exibir Produto.\n");
        printf("4 - Sair.\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            cadastra_produto(produto);
            break;
        case 2:
            altera_preco(produto, novo_preco);
            break;

        case 3:
            exibir_produto(produto);
            break;

        case 4:
            printf("Press enter");
            break;
        
        default:
            printf("Opção inválida!");
            break;
        }
    } while (opc != 4);
    
    return 0;
}