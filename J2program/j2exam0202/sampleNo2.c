#include <stdio.h>
#include <stdlib.h>

#define NUM 500
#define MAX 1000

void initialize(int data[]);
void disp_top10(int data[]);

int main(void)
{
  int data[NUM];
  double median;
  int mode;
  int prime_ct;
  
  srand(202);
  
  initialize(data);
	
  disp_top10(data);
  
  return 0;
}

void initialize(int data[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    data[i] = rand()%MAX;
  }
}

void disp_top10(int data[])
{
  int i;
  
  for (i=0; i<10; i++) {
    printf("%2d %3d\n", i, data[i]);
  }
  printf("\n");
}

