#include <stdio.h>

int main(){
  char sexo;

  printf("Digite o sexo:\n");
  printf("F - Feminino\n");
  printf("M - Masculino\n");
  printf("O - Outros\n");
  scanf("%c", &sexo);

  if(sexo == 'F' || sexo == 'f'){
    printf("Feminino");
  }
  else if(sexo == 'M' || sexo == 'm'){
    printf("Masculino");
  }
  else {
    printf("Outros");
  }


  return 0;
}
