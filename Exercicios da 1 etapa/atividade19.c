#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float saldoMedio, credito;
	
  	printf("Digite o saldo m�dio do cliente: ");
  	scanf("%f", &saldoMedio);

  	if(saldoMedio<=200){
    credito=saldoMedio*0.1;
  	}
  	else if(saldoMedio>200 && saldoMedio<=300){
    credito=saldoMedio*0.2;
  	}
  	else if(saldoMedio>300 && saldoMedio<=400){
    credito=saldoMedio*0.25;
  	}
  	else {
  	  credito=saldoMedio*0.3;
  	}

  	printf("Saldo m�dio: %.2f\n", saldoMedio);
  	printf("Cr�dito: %.2f\n", credito);

  return 0;
}
