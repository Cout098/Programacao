#include <stdio.h>

int main(){
  int ddd;

  printf("Informe o DDD: \n");
  scanf("%d",&ddd);

  if(ddd==61){
    printf("Brassilia");
  }
  if(ddd==71){
    printf("Salvador");
  }
  if(ddd==11){
    printf("Sao Paulo");
  }
  if(ddd==21){
    printf("Rio de Janeiro");
  }
  if(ddd==32){
    printf("Juiz de Fora");
  }
  if(ddd==19){
    printf("Campinas");
  }
  if(ddd==27){
    printf("Vitoria");
  }
  if(ddd==31){
    printf("Belo Horizonte");
  }
  else {
    printf("DDD nao cadastrado");
  }

  return 0;
}
