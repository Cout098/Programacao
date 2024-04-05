#include<stdio.h>
int main(){
	float n1, n2, n3, n4, media;
	
	printf("Digite as suas notas bimestrais:\n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("A media das notas e: %.2f", media);
	
	return 0;
}
