#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void setData(int x[]);
void dispData(int x[]);
void sortData(int x[]);

int main(void)
{
  int array[NUM];

  setData(array);
  dispData(array);

  sortData(array);
  dispData(array);

  return 0;
}

void setData(int x[])
{
  int i;

  srand(202);
  
  for (i=0; i<NUM; i++) {
    x[i] = rand()%100;
  }
  
}

void dispData(int x[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    printf("[%d] = %2d\n", i, x[i]);
  }
  printf("\n");
}

void sortData(int x[]){
    for(int i = 0; i < NUM - 1; i++){
        for(int j = 0; j < NUM - 1; j++){
            if(x[j] < x[j + 1]){
                int swap = x[j];
                x[j] = x[j + 1];
                x[j + 1] = swap;
            }
        }
    }
}
