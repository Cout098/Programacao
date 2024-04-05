#include<stdio.h>
int main(){
	float m, cm;
	
	printf("Digite a medida em metros: ");
	scanf("%f", &m);
	
	cm = m * 100;
	
	printf("A medida em centimetros e: %.2f", cm);
	
	return 0;
}
