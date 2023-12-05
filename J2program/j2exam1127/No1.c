#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num, *a;
void q1(void);
void q2(void);
void q34(void);

int main(void){
	srand((unsigned)time(NULL));
	
	q1();
	printf("\n");
	q2();
	printf("\n");
	q34();

	return 0;
}

void q1(void){
	printf("(1)\n");

	printf("num: ");
	scanf("%d", &num);

	a = (int*)malloc(sizeof(int) * num);
	
	for(int i = 0; i < num; i++){
		a[i] = rand() % 100;
		printf("[%d]: %2d\n", i , a[i]);
	}
}

void q2(void){
	printf("(2)\n");

	int odd = 0;
	for(int i = 0; i < num; i++){
		if(a[i] % 2 == 1){
			odd++;
		}
	}

	printf("odd: %d\n", odd);
}

void q34(void){
	int min;
	int secmin;
	if(a[0] < a[1]){
		min = a[0];
		secmin = a[1];
	}
	else{
		min = a[1];
		secmin = a[0];
	}

	for(int i = 2; i < num; i++){
		if(a[i] <= min){
			secmin = min;
			min = a[i];
		}
		else if(a[i] <= secmin){
			secmin = a[i];
		}
	}

	printf("(3)\n");
	printf("min: %d\n", min);
	printf("\n");
	printf("(4)\n");
	printf("second min: %d\n", secmin);
}
