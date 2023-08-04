#include<stdio.h>

int calc_money(int apple, int orange){
	return 150*apple+762*orange;
}

int main(void){
	int apple;
	int orange;

	printf("apple: ");
	scanf("%d",&apple);
	printf("orange: ");
	scanf("%d",&orange);
	
	printf("%dyen\n",calc_money(apple,orange));

	return 0;
}
