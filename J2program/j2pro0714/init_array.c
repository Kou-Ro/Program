#include <stdio.h>

#define NUM 5

void disp_array(int x[]);

int main(void)
{
  int array[5] = {10, 20, 30, 40, 50};
  int i;

  for (i=0; i<NUM; i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }

  disp_array(array);
  
  return 0;
}

void disp_array(int x[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    printf("%d ", x[i]);
  }
  printf("\n");
}
