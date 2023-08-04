#include <stdio.h>

int main(void)
{
	int sum=0;
	for(int i=5256;i<=17671;i++)
	{
		sum+=i;
	}

	printf("%d\n",sum);
	return 0;
}

/*int main(void)
{
	printf("%d\n",(5256+17671)*(17671-5255)/2);
}*/
