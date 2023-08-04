#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int randn;

	srand((unsigned)time(NULL));

	for(int i=0;i<20;i++){
		randn=rand()%6;
		printf("%d\n",randn);
	}

	return 0;
}
