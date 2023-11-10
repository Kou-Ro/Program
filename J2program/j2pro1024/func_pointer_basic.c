#include <stdio.h>

#define NUM 5

void func(int array[NUM]);

int main(void)
{
  int x[NUM];
  int i;

  for (i=0; i<NUM; i++) {
    x[i] = i*10;
  }

  for (i=0; i<NUM; i++) {
    printf("    x[%d]=%2d : %p\n", i, x[i], &x[i]);
  }
  printf("\n");

  func(x);

  for (i=0; i<NUM; i++) {
    printf("    x[%d]=%2d : %p\n", i, x[i], &x[i]);
  }

  return 0;
}

void func(int array[NUM])
{
  int n;

  for (n=0; n<NUM; n++) {
    printf("    array[%d]=%2d : %p\n", n, array[n], &array[n]);
  }
  printf("\n");

  for (n=0; n<NUM; n++) {
    array[n] = n*10+100;
  }
}

