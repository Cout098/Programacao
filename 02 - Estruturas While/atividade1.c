#include <stdio.h>
#include <locale.h>

int main(){
  int contador=0;

  while(contador<10){
    printf("%d\n", contador);
    contador++;
  }
  
  printf("%d\n",contador);
  
  while(contador>=0){
    printf("%d\n", contador);
    contador--;
  }
}
