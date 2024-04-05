#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, fatorial = 1;
	
	
	printf("Digite um número para que possamos calcular seu fatorial:\n");
	scanf("%d",&num);
	
	if(num<0){
		printf("Nào é possível calcular o fatorial de números negativos.\n");
	}
	else{
		while(num>0){
			fatorial*=num;
		}
		printf("O fatorial é: %d", fatorial);
	}
	
	return 0;
}
