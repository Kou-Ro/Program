#include<stdio.h>

double chenge(double yard);

int main(void){
	double yard=0;
	printf("yard :");
	scanf("%lf",&yard);
	//printf("%lf\n",yard);
	printf("%fm\n",chenge(yard));
	return 0;
}

double chenge(double yard){
	return yard*0.9144;
}
