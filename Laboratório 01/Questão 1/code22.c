/*
    Laboratório 01 - <CODE22>
    Dados do aluno:
    Nome: Eduardo Paulo Goes
    RA: (oculto no GitHub)
    Curso: Bacharelado em Ciência e Tecnologia
    Semestre: 1o
*/

/*
    Enunciado:
        Escrever um algoritmo que mostre o resultado de operações AND, OR e XOR.
*/

#include <stdio.h>

int main(void) {
  int a,b,c;

  printf("Insira um valor (0 ou 1) para a: ");
  scanf("%d", &a);
  printf("Insira um valor (0 ou 1) para b: ");
  scanf("%d", &b);
  printf("Insira um valor (0 ou 1) para c: ");
  scanf("%d", &c);

  printf("%d AND %d -> %d\n",a,b,a&&b);
  printf("%d OR %d -> %d\n",a,b,a||b);
  printf("%d XOR %d -> %d\n",a,b,a^b);
  printf("NOT(%d) -> %d\n",a,!a);
  printf("NOT(%d) -> %d\n",b,!b);
  printf("%d && %d -> %d\n",a,c,a&&c);
  printf("%d || %d -> %d\n",a,c,a||c);
  printf("%d ^ %d -> %d\n",a,c,a^c);
  printf("!%d -> %d\n",a,!a);
  printf("!%d -> %d\n",b,!b);
  return 0;
}