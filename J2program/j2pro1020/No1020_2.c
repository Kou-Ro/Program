#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand((unsigned)time(NULL));

	double base[10];
	for(int i = 0; i < 10; i++){
		*(base + i) = (double)rand() / RAND_MAX;
		printf("[%d]: %lf\n", i, *(base + i));
	}
	printf("\n");

	double rev[10];
	for(int i = 0; i < 10; i++){
		*(rev + i) = *(base + 9 - i);
		printf("[%d]: %lf\n", i, *(rev + i));
	}
}
