#include <stdio.h>
#include <math.h>

void q1(void);

int main(void){
	q1();

	return 0;
}

void q1(void){
	int num = 5;
	int sum = 0;
	for(int i = 1; i <= num; i++){
		if(i % 2 == 0){
			sum += pow(i, 2);
		}
	}
	printf("%d",sum);
}

