#include<stdio.h>
#include<math.h>

int main(void){
	double g=9.80665;
	double v=30;
	double dang=0;
	printf("Angle(deg): ");
	scanf("%lf",&dang);
	double rang=(dang*M_PI)/180;

	double l=(pow(v,2)*sin(2*rang))/g;

	printf("%lf\n",l);

	return 0;
}
