#include<stdio.h>

int calc_sum(int m,int n){
	return m+n;
}

int main(void){
	int n=calc_sum(1,2);
	printf("%d\n",n);

	return 0;
}

