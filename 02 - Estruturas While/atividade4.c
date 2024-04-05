#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int ale, num;
	
	srand(time(NULL));
	
	ale = rand() % 20+1;
	
	printf("Tente adivinhar o número entre 1 e 20\n");
	scanf("%d",&num);
	
	
	while(ale!=num){
	
		if(num<ale){
			printf("\nNúmero digitado é menor. \nTente novamente:\n");
		}
		else{
			printf("\nNúmero digitado é maior. \nTente novamente:\n");
		}
		scanf("%d",&num);
	}
	
	printf("Você acertou!");
	
	return 0;
}
