#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, fatorial = 1;
	
	
	printf("Digite um n�mero para que possamos calcular seu fatorial:\n");
	scanf("%d",&num);
	
	if(num<0){
		printf("N�o � poss�vel calcular o fatorial de n�meros negativos.\n");
	}
	else{
		while(num>0){
			fatorial*=num;
		}
		printf("O fatorial �: %d", fatorial);
	}
	
	return 0;
}
