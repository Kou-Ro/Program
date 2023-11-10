#include <stdio.h>

#define MAX 1100

int main(void)
{
  int *pt;
  int i;

  for (i=0; i<MAX; i++) {
    pt[i] = i;
  }
  
  for (i=0; i<MAX; i++) {
    printf("pt[%d]=%d\n", i, pt[i]);
  }

  return 0;
}
