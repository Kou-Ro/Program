#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 50000

void initialize(int array[]);
void disp_array(int array[]);
void straight_sort(int array[]);
void bubble_sort(int array[]);
void myqsort(int *, int, int);

void swap(int *a, int *b);

int main(void)
{
  int array[NUM];
  clock_t start, end;
  double req_time;

  start = clock();

  printf("sort program is running!\n");
  
  initialize(array);
  //disp_array(array);

  straight_sort(array);
  //bubble_sort(array);
  //myqsort(array,0,NUM-1);
  
  //disp_array(array);
  
  end = clock();
  req_time = (double)(end-start)/CLOCKS_PER_SEC;
  printf("req_time=%f\n", req_time);
  
  return 0;
}

void initialize(int array[])
{
  int i;
  
  srand(0);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%NUM;
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

void straight_sort(int array[])
{
  int i, j;
  int index;
  long int swap_ct = 0;
  long int comp_ct = 0;

  printf("straight_sort\n");
  for (i=0; i<NUM-1; i++) {
    index = i;
    for (j=i+1; j<NUM; j++) {
      comp_ct++;
      if(array[j]<array[index]) {
	index = j;
      }
    }
    swap_ct++;
    swap(&array[i], &array[index]);
  }
  printf("comp_ct=%ld, swap_ct=%ld\n", comp_ct, swap_ct);
}

void bubble_sort(int array[])
{
  int i,j;
  long int swap_ct = 0;
  long int comp_ct = 0;
  int flag;
  
  printf("bubble_sort\n");
  for (i=0; i<NUM-1; i++) {
    flag = 0;
    for (j=NUM-1; j>i; j--) {
      comp_ct++;
      if (array[j]<array[j-1]) {
	swap_ct++;
        swap(&array[j], &array[j-1]);
	flag=1;
      }
    }
    /*
    if (flag==0) {
      break;
    }
    */
  }
  printf("comp_ct=%ld, swap_ct=%ld\n", comp_ct, swap_ct);

}

void swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
}
