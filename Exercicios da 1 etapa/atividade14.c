#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  float l1, l2, l3;

  printf("Digite as medidas dos lados do triângulo: ");
  scanf("%f %f %f", &l1, &l2, &l3);
  if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
    printf("É possível formar um triângulo com essas medidas.\n");
  }
  else {
    printf("Não é possível formar um triângulo com essas medidas.\n");
  }
  return 0;
}
