#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, soma;
	
	while(num!=0){
		printf("Insira um número inteiro:");
		scanf("%d", &num);
		
		soma+=num;
	}
	
	printf("A soma dos números inseridos é: %d", soma);
}
