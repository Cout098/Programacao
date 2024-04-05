#include<stdio.h>

int main(){
	float n1, r;
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
	r=n1*0.2;
	// ou r=n1/5;
	printf("O numero digitado foi %f.", r);
	
	return 0;
}
