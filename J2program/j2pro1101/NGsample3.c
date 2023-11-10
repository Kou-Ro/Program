#include <stdio.h>

#define NUM 20

int main(void)
{
  int array[5];
  int i;

  for (i=0; i<NUM; i++) {
    array[i] = i;
  }
  
  for (i=0; i<NUM; i++) {
    printf("pt[%d]=%d\n", i, array[i]);
  }

  return 0;
}
