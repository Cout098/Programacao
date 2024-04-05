#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%d %d",&n1,&n2);
	
	if(n1>n2)
	{
		printf("%d - %d", n2, n1);
	}
	else if(n2>n1)
		{
			printf("%d - %d", n1, n2);
		}
	else
	{
		printf("os numeros sao iguais");
	}
	
}
