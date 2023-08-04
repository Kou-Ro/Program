#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	srand((unsigned)time(NULL));

	printf("%c\n",rand()%26+'a');

	return 0;
}
