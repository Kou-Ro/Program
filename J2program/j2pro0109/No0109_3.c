#include <stdio.h>
#include <stdlib.h>

#define NUM 10
#define MAX 100

void initialize(int array[]);
void disp_array(int array[]);
void sort(int array[]);
void swap(int *a, int *b);

int main(void)
{
  int array[NUM];

  initialize(array);
  disp_array(array);

  sort(array);
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

void sort(int array[])
{
  int i, j;
  int max_index;

  for (i=0; i < NUM -1; i++) {
    max_index = i;
    for (j = i + 1; j < NUM; j++) {
      if(array[j] > array[max_index]) {
            max_index = j;
      }
    }
    swap(&array[i], &array[max_index]);
  }
}

void swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
}
