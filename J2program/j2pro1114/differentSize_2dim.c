#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 4

int main(void)
{
  int **numberBox;
  int i, ct;
  int r, c;
  
  // 行数を決める
  numberBox = (int **)malloc(sizeof(int *) * ROW);
  for (r=0; r<ROW; r++) {
    numberBox[r] = (int *)malloc(sizeof(int) * COL);
  }
  
  ct = 1;
  for (r=0; r<ROW; r++) {
    for (c=0; c<COL; c++) {
      numberBox[r][c] = ct++;
    }
  }

  for (r=0; r<ROW; r++) {
    for (c=0; c<COL; c++) {
      printf("numberBox[%d][%d]=%d\n", r, c, numberBox[r][c]);
    }
  }
  
  for (r=0; r<ROW; r++) {
    free(numberBox[r]);
  }
  free(numberBox);

  return 0;
}
