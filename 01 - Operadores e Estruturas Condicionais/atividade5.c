#include <stdio.h>
#include <stdlib.h>

int main(){
	float sb, sl, ip;
	
	printf("Digite o valor do salario bruto:\n");
	scanf("%f",&sb);
	
	if(sb<1000)
	{
		ip=sb*0.05;
		sl=sb-ip;
		printf("\nO valor do imposto e: %.2f", ip);
		printf("\nO salario liquido sera de: %.2f", sl);
	}
	else if(sb>=1000 && sb<5000)
	{
		ip=sb*0.11;
		sl=sb-ip;
		printf("\nO valor do imposto e: %.2f", ip);
		printf("\nO salario liquido sera de: %.2f", sl);
	}
	else
	{
		ip=sb*0.35;
		sl=sb-ip;
		printf("\nO valor do imposto e: %.2f", ip);
		printf("\nO salario liquido sera de: %.2f", sl);
	}
		
	return 0;
}
