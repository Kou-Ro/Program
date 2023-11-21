#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *pt;
  char **numberBox;
  int i, ct;

  // 行数を決める
  numberBox = (char **)malloc(sizeof(char *) * 3);
  // 1行目の列数
  numberBox[0] = (char *)malloc(sizeof(char) * 3);
  // 2行目の列数
  numberBox[1] = (char *)malloc(sizeof(char) * 2);
  // 3行目の列数
  numberBox[2] = (char *)malloc(sizeof(char) * 4);
  
  ct = 1;
  // 1行目
  for (i=0; i<3; i++) {
    numberBox[0][i] = ct++;
  }
  // 2行目
  for (i=0; i<2; i++) {
    numberBox[1][i] = ct++;
  }
  // 3行目
  for (i=0; i<4; i++) {
    numberBox[2][i] = ct++;
  }

  // 出力
  printf("size of char=%d\n", (int)sizeof(char));
  printf("size of numberBox=%d\n", (int)sizeof(numberBox));
  printf("size of pt=%d\n", (int)sizeof(pt));
  printf("numberBox=%p\n", numberBox);
  for (i=0; i<3; i++) {
    printf("numberBox[%d]=%p\n", i, numberBox[i]);
  }

  for (i=0; i<3; i++) {
    printf("numberBox[%d][%d]=%d, %p\n", 0, i, numberBox[0][i], &numberBox[0][i]);
  }
  for (i=0; i<2; i++) {
    printf("numberBox[%d][%d]=%d, %p\n", 1, i, numberBox[1][i], &numberBox[1][i]);
  }
  for (i=0; i<4; i++) {
    printf("numberBox[%d][%d]=%d, %p\n", 2, i, numberBox[2][i], &numberBox[2][i]);
  }

  free(numberBox[0]);
  free(numberBox[1]);
  free(numberBox[2]);
  free(numberBox);

  return 0;
}
