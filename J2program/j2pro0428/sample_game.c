#include <stdio.h>

int main(void)
{
  int num;
  int score = 0;
  int flag;

  printf("Game Start!\n");

  flag = 1; // flagが1のときゲームを継続する，0のとき終了する
  while (flag==1) {
    printf("num=");
    scanf("%d", &num);

    if (num%7!=0) {
      printf("Safe!\n\n");
      score++;
    }
    else {
      printf("Bomb!!\n\n");
      flag = 0;
    }
  }

  printf("Score=%d\n", score);

  
  return 0;
}
