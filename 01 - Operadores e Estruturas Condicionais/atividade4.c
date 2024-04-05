#include <stdio.h>
#include <stdlib.h>

int main(){
	float s, ip;
	
	printf("Digite o valor do salario recebido:\n");
	scanf("%f",&s);
	
	if(s>=2824)
	{
		ip=s*0.1;
		printf("\nO valor do imposto e: %.2f", ip);
	}
	else if(s<2824 && s>0)
	{
		ip=s*0.05;
		printf("\nO valor do imposto e: %.2f", ip);
	}
	else{
		printf("\nO valor digitado e invalido");
	}
		
	return 0;
}
