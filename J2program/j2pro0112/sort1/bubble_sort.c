#include "myhead.h"

void swap(int *a, int *b);

void selection_sort(int array[])
{
  int i, j;
  int index;
  
  for (i=0; i<NUM-1; i++) {
    index = i;
    for (j=i+1; j<NUM; j++) {
      if(array[j]<array[index]) {
	index = j;
      }
    }
    swap(&array[i], &array[index]);
  }
}
