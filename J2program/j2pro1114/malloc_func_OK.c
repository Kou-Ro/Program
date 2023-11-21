#include <stdio.h>
#include <stdlib.h>

#define NUM 10

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

  pt = (int *)malloc(NUM*sizeof(int));

  input(pt);
  
  output(pt);

  free(pt);
  
  return 0;
}
