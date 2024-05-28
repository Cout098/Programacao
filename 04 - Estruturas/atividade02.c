#include <stdio.h>
#include <string.h>

struct livro
{
    char tituloLivro[60];
    char autor[30];
    int numeroRegistro;
    float preco;
};

void palavraMenor(char resultado[], char str1[], char str2[]){
    if(strlen(str1) < strlen(str2))
    {
        strcpy(resultado, str1);
    } else
    {
        strcpy(resultado, str2);
    }
}

struct livro somaLivro(struct livro livro1, struct livro livro2){
    struct livro livroResultado;

    palavraMenor(livroResultado.tituloLivro, livro1.tituloLivro, livro2.tituloLivro);
    palavraMenor(livroResultado.autor, livro1.autor, livro2.autor);

    livroResultado.numeroRegistro = livro1.numeroRegistro + livro2.numeroRegistro;
    livroResultado.preco = livro1.preco + livro2.preco;

    return livroResultado;
}

int main(){

    struct livro livro1 = {"Harry Potter e a Pedra Filosofal", "J.K. Rolling", 1000, 39.90};
    struct livro livro2 = {"O Senhor dos Aneis - Duas Torres", "J.R.R. Tolkien", 2000, 59.90};
    struct livro livroResultado;

    livroResultado = somaLivro(livro1,livro2);

    printf("Titulo....: %s.\n", livroResultado.tituloLivro);
    printf("Autor.....: %s.\n", livroResultado.autor);
    printf("Registro..: %d.\n", livroResultado.numeroRegistro);
    printf("Preco.....: %.2f.\n", livroResultado.preco);

    return 0;
}