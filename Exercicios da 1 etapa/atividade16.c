#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
  setlocale(LC_ALL, "Portuguese");

  int n1, n2, opc;
  float r1, r2;

  printf("Digite dois n�meros:\n");
  scanf("%d %d", &n1, &n2);
  printf("Escolha uma op��o\n");
  printf("1 - O primeiro elevado pelo segundo\n");
  printf("2 - Raiz quadrada de cada um dos n�meros\n");
  scanf("%d", &opc);
  switch(opc){
    case 1:
      printf("O primeiro elevado pelo segundo: %d\n", n1^n2);
    break;
    case 2:
      r1 = sqrt(n1);
      r2 = sqrt(n2);
      printf("Raiz quadrada de cada um dos n�meros: %.2f %.2f\n", r1, r2);
    break;
    default:
      printf("Op��o inv�lida\n"); 
  } 

  return 0;
}
