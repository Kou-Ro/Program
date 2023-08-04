#include <stdio.h>

int getInputNumber(void)
{
  int num;

  do {
    printf("Input number(1-3) = ");
    scanf("%d", &num);
  } while(num<1 || 3<num);

  return num;
}

int main(void)
{
  int num;
  
  num = getInputNumber();

  num = num * 100;

  printf("num=%d\n", num);

  return 0;
}

