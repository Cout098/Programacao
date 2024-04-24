#include <stdio.h>
#include <stdlib.h>

int main(){
  float cc, cf, pd, ip;

  printf("Digite o custo de fabrica do veiculo:\n");
  scanf("%f",&cf);

  if(cf<18000){
    pd=0.05;
    ip=0;
  }
  if(cf>=18000 && cf<=25000){
    pd=0.10;
    ip=0.15;
  }
  if(cf>25000){
    pd=0.15;
    ip=0.2;
  }
  cc=cf+(cf*pd)+(cf*ip);
  
  printf("O custo final do veiculo e: %.2f\n",cc);

  return 0;
}
