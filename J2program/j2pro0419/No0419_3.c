#include <stdio.h>

int main(void)
{
	int time=0;
	scanf("%d",&time);

	for(int i=1;i<=time;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
