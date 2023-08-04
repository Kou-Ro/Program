#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int val;

	srand((unsigned)time(NULL));

	for(int i=0;i<100;i++)
	{
		val=rand();
		printf("%d   %d\n",i,val);
	}

	return 0;
}
