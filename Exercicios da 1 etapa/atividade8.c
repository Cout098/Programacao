#include<stdio.h>
int main(){
	int n1, n2;
	
	printf("Digite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	if(n1>=n2){
		printf("%d e maior", &n1);
	}else {
		printf("%d e maior", &n2);
	}
	
	return 0;
}
