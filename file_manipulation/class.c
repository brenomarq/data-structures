#include <stdio.h>

int main() {
  FILE *arq;
  char c;

  arq = fopen("arquivo.txt", "r");

  if (arq) {
    while ((c = getc(arq)) != EOF) {
      printf("%c", c);
    }
  } else {
    printf("Arquivo não existe\n");
  }

  fclose(arq);
  return 0;
}
