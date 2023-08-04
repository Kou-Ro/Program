#include <stdio.h>

int getInputNumber(void)
{
  int num;
  
  do {
    printf("input number(1-3) = ");
    scanf("%d", &num);
  } while(num<1 || 3<num);

  return num;
}

void omikuji(int number)
{
  if (number == 1) {
    printf("大吉です!すごいね!\n");
  }
  else if (number == 2) {
    printf("吉です．やったー．\n");
  }
  else if (number == 3) {
    printf("末吉です．まぁ，普通だね\n");
  }
  else {
    printf("1, 2, 3以外の数値が入力されました．\n");
    printf("1, 2, 3のどれかを入力してね．\n");
  }
}

int main(void)
{
  int number;
  
  number = getInputNumber();
  
  omikuji(number);

  return 0;
}

