#include <stdio.h>

int main(void) {
  int matriz[5][5];
  int n = 0;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      matriz[i][j]= n++;
    }
  }
  // impressão
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  // diagonal principal:
  for( int i = 0; i < 5; i++) {
    printf("%d\n", matriz[i][i]);
  }
  // diagonal secundária:
  for(int i = 0; i < 5; i++) {
    printf("%d\n", matriz[i][4-i]);
  }

  int max = matriz[0][0];
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      if( matriz[i][j] > max ) {
        max = matriz[i][j];
      }
    }
  }
  printf("O maior valor da matriz é %d\n", max);
  return 0;
}