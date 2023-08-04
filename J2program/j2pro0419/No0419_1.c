#include <stdio.h>

int main(void)
{
	int age=0;
	scanf("%d",&age);
	int price=0;

	if(age<0||age>110)
	{
		printf("error");
		return 0;
	}
	else if(age<6)
	{
		price=0;
	}
	else if(age<12)
	{
		price=350;
	}
	else
	{
		price=700;
	}

	printf("%d\n",price);

	return 0;
}
