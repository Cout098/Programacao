#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num=1, prod=1;
	while(num <= 5){
		prod *= num;
		num++;
	}
	
	printf("O produto dos n�meros de 1 a 5 �: %d", prod);
}
