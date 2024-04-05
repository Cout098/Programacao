#include<stdio.h>
int main(){
	float a, r;
	
	printf("Qual o raio do circulo? \n ");
	scanf("%f", &r);
	a=3.14*(r*r);
	
	printf("A area do circulo e: %.2f", a);
	
	return 0;
}
