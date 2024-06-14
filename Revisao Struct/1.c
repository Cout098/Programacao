//Alunos:
//Ricardo Costa de Souza Melo - MONSTRO SAGRADO DA PROGRAMAÇÃO
//Breder Augusto Almeida Couto

//Breder = Alterei algumas coisas do nosso Código em sala para a realidade de WINDOWS
//Além de alterar alguns pequenos detalhes no visual e ordem do programa. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NUM_ALUNOS 2

typedef struct {
	float matematica, portugues, historia, geografia, ciencias;
} Nota;

typedef struct {
	char nome[50];
	char sobrenome[150];
	Nota notas[4];
} Aluno;

void cadastrar_alunos (Aluno alunos[NUM_ALUNOS]) {
	int indiceAluno;

	for (indiceAluno = 0; indiceAluno < NUM_ALUNOS; ++indiceAluno)
	{
		printf("Digite o nome do aluno %d: ", indiceAluno + 1);
		fflush(stdin);
		gets(alunos[indiceAluno].nome);
		printf("Digite o sobrenome do aluno %d: ", indiceAluno + 1);
		fflush(stdin);
		gets(alunos[indiceAluno].sobrenome);
		printf("\n");
	}

}

void cadastrar_notas (Aluno alunos[NUM_ALUNOS]) {
	int indiceAluno, indiceNota;

	for (indiceAluno = 0; indiceAluno < NUM_ALUNOS; ++indiceAluno)
	{
		for(indiceNota = 0; indiceNota < 4; ++indiceNota) {
			printf("Digite a nota do %dº aluno em Matemática no %dº bimestre: \n", indiceAluno + 1, indiceNota + 1);
			scanf("%f", &alunos[indiceAluno].notas[indiceNota].matematica);
			printf("Digite a nota do %dº aluno em Português no %dº bimestre: \n", indiceAluno + 1, indiceNota + 1);
			scanf("%f", &alunos[indiceAluno].notas[indiceNota].portugues);
			printf("Digite a nota do %dº aluno em História no %dº bimestre: \n", indiceAluno + 1, indiceNota + 1);
			scanf("%f", &alunos[indiceAluno].notas[indiceNota].historia);
			printf("Digite a nota do %dº aluno em geografia no %dº bimestre: \n", indiceAluno + 1, indiceNota + 1);
			scanf("%f", &alunos[indiceAluno].notas[indiceNota].geografia);
			printf("Digite a nota do %dº aluno em Ciências no %dº bimestre: \n", indiceAluno + 1, indiceNota + 1);
			scanf("%f", &alunos[indiceAluno].notas[indiceNota].ciencias);
		}
		printf("\n");
	}
}

void exibir_alunos (Aluno alunos[NUM_ALUNOS]) {
	int indiceAluno, indiceNota;

	for (indiceAluno = 0; indiceAluno < NUM_ALUNOS; ++indiceAluno)
	{
		printf("%s %s\n", alunos[indiceAluno].nome, alunos[indiceAluno].sobrenome);
		for(indiceNota = 0; indiceNota < 4; ++indiceNota) {
			printf("%d° bimestre\n", indiceNota + 1);
			printf("Matemática: %.1f\n", alunos[indiceAluno].notas[indiceNota].matematica);
			printf("Português: %.1f\n", alunos[indiceAluno].notas[indiceNota].portugues);
			printf("História: %.1f\n", alunos[indiceAluno].notas[indiceNota].historia);
			printf("Geografia: %.1f\n", alunos[indiceAluno].notas[indiceNota].geografia);
			printf("Ciências: %.1f\n", alunos[indiceAluno].notas[indiceNota].ciencias);
			printf("\n");
		}
		printf("\n");
	}
}

void buscar_aluno (Aluno alunos[NUM_ALUNOS]) {
	char nome[50], sobrenome[150];
	int indiceAluno, indiceNota;

	printf("Digite o nome do aluno: ");
	fflush(stdin);
	gets(nome);

	printf("Digite o sobrenome do aluno: ");
	fflush(stdin);
	gets(sobrenome);

	for (indiceAluno = 0; indiceAluno < NUM_ALUNOS; ++indiceAluno)
	{
		if ((strcmp(nome, alunos[indiceAluno].nome) == 0) && (strcmp(sobrenome, alunos[indiceAluno].sobrenome) == 0))
		{
			printf("%s %s\n", alunos[indiceAluno].nome, alunos[indiceAluno].sobrenome);
			for(indiceNota = 0; indiceNota < 4; ++indiceNota) {
				printf("%dº bimestre\n", indiceNota + 1);
				printf("Matemática: %.1f\n", alunos[indiceAluno].notas[indiceNota].matematica);
				printf("Português: %.1f\n", alunos[indiceAluno].notas[indiceNota].portugues);
				printf("História: %.1f\n", alunos[indiceAluno].notas[indiceNota].historia);
				printf("Geografia: %.1f\n", alunos[indiceAluno].notas[indiceNota].geografia);
				printf("Ciências: %.1f\n\n", alunos[indiceAluno].notas[indiceNota].ciencias);
			}
		}
	}
}

void calcular_media_aluno (Aluno alunos[NUM_ALUNOS]) {
	char nome[50], sobrenome[150];
	int indiceAluno, indiceNota, retorno = 0;
	float totalNotas = 0, mediaNota = 0;

	printf("Digite o nome do aluno: ");
	fflush(stdin);
	gets(nome);

	printf("Digite o sobrenome do aluno: ");
	fflush(stdin);
	gets(sobrenome);

	for (indiceAluno = 0; indiceAluno < NUM_ALUNOS; ++indiceAluno)
	{
		if ((strcmp(nome, alunos[indiceAluno].nome) == 0) && (strcmp(sobrenome, alunos[indiceAluno].sobrenome) == 0))
		{
			for(indiceNota = 0; indiceNota < 4; ++indiceNota) {
				totalNotas += alunos[indiceAluno].notas[indiceNota].matematica + alunos[indiceAluno].notas[indiceNota].portugues + alunos[indiceAluno].notas[indiceNota].historia + alunos[indiceAluno].notas[indiceNota].geografia + alunos[indiceAluno].notas[indiceNota].ciencias;
			}

			mediaNota = (totalNotas / 4) / 5;
			printf("A media do aluno é: %.1f.\n", mediaNota);
		} else {
			retorno++;
		}
	}
	if (retorno == NUM_ALUNOS)
	{
		printf("O aluno não foi cadastradado.\n");
	}
}

void calcular_media_disciplina (Aluno alunos[NUM_ALUNOS]) {
	int indiceAluno, indiceNota, opcao;
	float totalNotas = 0, mediaNota = 0;

	printf("Escolha uma opção:\n");
	printf("1 - Matemática\n");
	printf("2 - Português\n");
	printf("3 - História\n");
	printf("4 - Geografia\n");
	printf("5 - Ciências\n");
	scanf("%d", &opcao);

	for (indiceAluno = 0; indiceAluno < NUM_ALUNOS; ++indiceAluno)
	{
		for(indiceNota = 0; indiceNota < 4; ++indiceNota) {
			switch(opcao) {
				case 1:
					totalNotas += alunos[indiceAluno].notas[indiceNota].matematica;
					break;
				case 2:
					totalNotas += alunos[indiceAluno].notas[indiceNota].portugues; 
					break;
				case 3:
					totalNotas += alunos[indiceAluno].notas[indiceNota].historia; 
					break;
				case 4:
					totalNotas += alunos[indiceAluno].notas[indiceNota].geografia; 
					break;
				case 5:
					totalNotas += alunos[indiceAluno].notas[indiceNota].ciencias; 
					break;
				default: 
					printf("opção inválida!\n");
					break;
			}
		}
	}

	if (opcao >= 1 && opcao <= 5)
	{
		mediaNota = (totalNotas / 4) / NUM_ALUNOS;
		printf("\nA média foi de: %.1f pontos\n", mediaNota); 
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	Aluno alunos[NUM_ALUNOS];

	do {
		system("cls");
		printf("Escolha uma opção:\n");
		printf("1 - Cadastrar Alunos\n");
		printf("2 - Cadastrar Notas\n");
		printf("3 - Exibir Alunos\n");
		printf("4 - Calcular Média de Aluno\n");
		printf("5 - Calcular Média de Disciplina\n");
		printf("6 - Buscar Aluno\n");
		printf("7 - Sair\n");
		scanf("%d", &opcao);

		switch(opcao) {
			case 1:
				cadastrar_alunos(alunos);
				break;
			case 2:
				cadastrar_notas(alunos);
				break;
			case 3:
				exibir_alunos(alunos);
				break;
			case 4:
				calcular_media_aluno(alunos);
				break;
			case 5:
				calcular_media_disciplina(alunos);
				break;
			case 6:
				buscar_aluno(alunos);
				break;
			case 7:
				break;
			default:
				printf("opção inválida!\n");
				break;
		}
		printf("\n...Pressione enter para retornar ao menu...\n");
		if(opcao != 7) {
			fflush(stdin);
			getchar();
		}
	} while(opcao != 7);

	return 0;
}