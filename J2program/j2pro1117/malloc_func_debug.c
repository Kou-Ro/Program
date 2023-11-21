#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void initialize(int **ptpt)
{
  printf("%p : ptptのアドレス\n", &ptpt);
  printf("%p : ptptの中身\n\n", ptpt);

  *ptpt = (int *)malloc(NUM*sizeof(int));

  printf("%p : ptptのアドレス\n", &ptpt);
  printf("%p : ptptの中身\n", ptpt);
  printf("%p : ptptが指すアドレスにあるポインタ\n\n", *ptpt);
}

void input(int *array)
{
  int i;

  for (i=0; i<NUM; i++) {
    array[i] = i;
  }
}

void output(int *array)
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("arry[%d]=%d\n", i, array[i]);
  }
}

int main(void)
{
  int *pt;

  printf("%p : ptのアドレス\n", &pt);
  printf("%p : ptの中身\n\n", pt);

  initialize(&pt);
  
  printf("%p : ptのアドレス\n", &pt);
  printf("%p : ptの中身\n", pt);
  
  input(pt);
  
  output(pt);

  free(pt);
  
  return 0;
}
