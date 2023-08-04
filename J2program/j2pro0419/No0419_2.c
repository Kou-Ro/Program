#include <stdio.h>

int main(void)
{
	int i=0;
	int ar[10]={0};
	while(i<10){
	ar[i]=i*2+1;
	i++;
	}

	i=0;
	int sum=0;
	while(i<10){
	sum+=ar[i];
	i++;
	}

	printf("%d\n",sum);

	return 0;
}
