#include <stdio.h>

int main(void)
{
  int ma[2][5];
  int i, j;
  
  for (i=0; i<2; i++) {
    for (j=0; j<5; j++) {
      printf("ma[%d][%d]:%p\n", i, j, &ma[i][j]);
    }
  }
  printf("\n");

  for (j=0; j<5; j++) {
    for (i=0; i<2; i++) {
      printf("ma[%d][%d]:%p\n", i, j, &ma[i][j]);
    }
  }
  
  return 0;
}
