#include <stdio.h>
#include <stdlib.h>
#include "myhead.h"

void initialize(int array[]);
void disp_array(int array[]);
void selection_sort(int array[]);

int main(void)
{
  int array[NUM];

  initialize(array);
  disp_array(array);

  selection_sort(array);
  //bubble_sort(array);
  
  disp_array(array);
  
  return 0;
}

void initialize(int array[])
{
  int i;
  
  srand(0);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%MAX;
  }
}

void disp_array(int array[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    printf("%d\n", array[i]);
  }
  printf("\n");

}

void swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
}
