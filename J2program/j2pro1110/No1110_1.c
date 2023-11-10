#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *q1(int *n);
void q2(int *marr, int n);
void q3(int *marr, int n);

int main(){
	srand((unsigned)time(NULL));

	int n;
	int *marr = q1(&n);
	q2(marr, n);
	q3(marr, n);
	free(marr);
}

int *q1(int *n){
	scanf("%d", n);

	int *marr = (int*)malloc(sizeof(int) * *n);
	
	printf("Q1:\n");
	for(int i = 0; i < *n; i++){
		marr[i] = rand() % 10;
		printf("marr[%d]: %d\n", *n, marr[i]);
	}
	printf("\n");

	return marr;
}

void q2(int *marr, int n){
	int max = 0;
	for(int i = 0; i < n; i++){
		if(marr[i] > marr[max]){
			max = i;
		}
	}

	printf("Q2: %d\n", marr[max]);
	printf("\n");
}

void q3(int *marr, int n){
	printf("Q3:\n");
	printf("marr[%d]: %d\n", 0, marr[0]);

	for(int i = 1; i < n; i++){
		marr[i] = marr[i - 1] + marr[i];
		printf("marr[%d]: %d\n", i, marr[i]);
	}
	
	printf("SUM: %d\n", marr[n - 1]);
}
