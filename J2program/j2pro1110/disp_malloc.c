#include <stdio.h>
#include <stdlib.h>

#define NUM 3

int main(void)
{
  int i;
  int array_i[NUM];
  int *pt;

  for (i=0; i<NUM; i++) {
    printf("array_i[%d]のアドレスは%p\n", i, &array_i[i]);
  }
  printf("\n");

  pt = (int *)malloc(sizeof(int)*NUM);
  
  printf("   ptのアドレスは%p\n", &pt);
  printf("       ptの中身は%p\n", pt);
  for (i=0; i<NUM; i++) {
    printf("pt[%d]のアドレスは%p\n", i, &pt[i]);
  }
  free(pt);

  return 0;
}
