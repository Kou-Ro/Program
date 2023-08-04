#include <stdio.h>
#include <stdlib.h>

#define NUM 30

void make_string(char tmp[]);
void upper_string(char tmp[]);

int main(void)
{
  char str[NUM+1];

  srand(731);
  make_string(str);
  printf("(1) %s\n", str);

  upper_string(str);
  printf("(2) %s\n", str);
  
  return 0;
}


void make_string(char tmp[])
{
	for(int i = 0; i < NUM; i++){
		tmp[i] = 'a' + (rand() % ('z' + 1 - 'a'));
	}

	return;
}

void upper_string(char tmp[])
{
	for(int i = 0; i < NUM; i++){
		tmp[i] = 'A' + (tmp[i] -'a');

	}
}
