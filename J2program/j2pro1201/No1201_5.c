#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num;
int *argsize;
int **arg;

void q1(void);
void q2(void);
void q3(void);

int main(void){
	srand((unsigned)time(NULL));

	q1();
	printf("\n");
	q2();
	printf("\n");
	q3();

	return 0;
}

void q1(void){
	printf("(1)\n");
	printf("num: ");
	scanf("%d", &num);
	
	argsize = (int *)malloc(sizeof(int) * num);
	arg = (int **)malloc(sizeof(int *) * num);

	for(int i = 0; i < num; i++){
		argsize[i] = (rand() % 6) + 3;
		arg[i] = (int *)malloc(sizeof(int) * argsize[i]);
		
		printf("arg[%d]:", i);
		for(int j = 0; j < argsize[i]; j++){
			arg[i][j] = rand() % 10;
			printf(" %d", arg[i][j]);
		}
		printf("\n");
	}
}

void q2(void){
	printf("(2)\n");
	for(int i = 0; i < num; i++){
		int sum = 0;
		for(int j = 0; j < argsize[i]; j++){
			sum += arg[i][j];
		}
		
		printf("arg[%d]: %d\n", i, sum);
	}
}

void q3(void){
	printf("(3)\n");
	
	int col;
	printf("col: ");
	scanf("%d", &col);
	
	int sum = 0;
	for(int i = 0; i < num; i++){
		if(col >= argsize[i]){
			printf("NG\n");
			return;
		}

		sum += arg[i][col];
	}

	printf("sum: %d\n", sum);
}
