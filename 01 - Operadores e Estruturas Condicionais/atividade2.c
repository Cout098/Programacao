#include <stdio.h>
#include <stdlib.h>

int main(){
	float s;
	
	printf("Digite o valor do salario recebido:\n");
	scanf("%f",&s);
	
	if(s<=1412){
		s=s+(s*0.1);
	}else{
		s=s+(s*0.05);
	}
	
	printf("O salario total sera de: %.2f\n", s);
	
	return 0;
}
