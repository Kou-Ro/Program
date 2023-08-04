#include <stdio.h>

#define MAX 10

void setNumber(int array[])
{
	for(int i = 0; i < MAX; i++){
		array[i] = i+1;
	}
}

void dispNumber(int array[])
{
	for(int i = 0; i < MAX; i++){
		printf("[%d] : %d\n",i,array[i]);
	}	
}

void doubleNumber(int array[])
{
	for(int i = 0; i < MAX; i++){
		array[i]*=2;
	}
}

int main(void)
{
  int array[MAX];

  setNumber(array);

  dispNumber(array);

  doubleNumber(array);

  dispNumber(array);
  
  return 0;
}
