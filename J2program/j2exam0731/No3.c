#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RET printf("\n")

void rundNum(int nums[]);
void setBom(void);

int main(void){
	srand((unsigned)time(NULL));
	int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	rundNum(nums);

	printf("(1)");
	for(int i = 0; i < 10; i++){
		printf(" %d", nums[i]);
	}
	RET;


	setBom();
}

void rundNum(int nums[]){
	for(int i = 0; i < 10; i++){
		int ind = rand() % (10-i);
		int cat = nums[i];
		nums[i] = nums[i + ind];
		nums[i + ind] = cat;
	}
}

void setBom(void){
	
	int xy[5][5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			xy[i][j] = 0;
		}
	}
	for(int i = 0; i < 5; i++){
		while(1 == 1){
			int x = rand() % 5;
			int y = rand() % 5;
			
			if(xy[x][y] != 1){
				xy[x][y] = 1;
				break;
			}
		}
	}
	
	printf("+---------+\n");
	for(int i = 0; i < 5; i++){
		printf("|");
		for(int j = 0; j < 5;j++){
			if(xy[i][j] == 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("|\n");
	}
	printf("+---------+\n");
}
