#include<stdio.h>
int main(){
	int n1;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	if(n1>=0){
		printf("%d � positivo", &n1);
	}else {
		printf("%d � negativo", &n1);
	}
	
	return 0;
}
