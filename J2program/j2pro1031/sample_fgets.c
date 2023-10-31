#include <stdio.h>

int main(void)
{

  /* n-1文字まで読み込む　or 改行までの文字列を読み込む*/
  /* 読み込んだ文字列の最後は\0を付加する */
  char buf[11+1];
  
  printf("input your number=");
  fgets(buf, 11+1, stdin);

  printf("[%s]\n", buf);
  printf("[%c] [%c]\n", buf[10], buf[11]);
  
  return 0;
}
