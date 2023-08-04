#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int randn;

	srand((unsigned)time(NULL));

	printf("%d\n",rand()%6+1);

	return 0;

}
