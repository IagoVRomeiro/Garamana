#include <stdio.h>
#include <string.h>

int main() {
  char Palavra1[20], Palavra2[20];
  scanf("%s", Palavra1);
  scanf("%s", Palavra2);

  int qtdLetras = strlen(Palavra1);

  int életra[20] = {0};
  int qtdAsteriscos = 0;

  for (int i = 0; i < qtdLetras; i++) {
    if (Palavra1[i] != '*') {
      életra[Palavra1[i] - 'a']++;
    } else {
      qtdAsteriscos++;
    }
  }

  for (int i = 0; i < qtdLetras; i++) {
    if (Palavra2[i] != '*') {
      if (életra[Palavra2[i] - 'a'] > 0) {
        életra[Palavra2[i] - 'a']--;
      } else {
        if (qtdAsteriscos > 0) {
          qtdAsteriscos--;
        } else {
          printf("N\n");
          return 0;
        }
      }
    }
  }

  printf("S\n");
  return 0;
}
