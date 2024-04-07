#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  float l1, l2, l3;

  printf("Digite as medidas dos lados do tri�ngulo: ");
  scanf("%f %f %f", &l1, &l2, &l3);
  if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
    printf("� poss�vel formar um tri�ngulo com essas medidas.\n");
  }
  else {
    printf("N�o � poss�vel formar um tri�ngulo com essas medidas.\n" );
  }
  return 0;
}
