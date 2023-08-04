#include<stdio.h>

int hikaku(int a,int b,int c){
	int r=0;
	if(a>b)r=b;
	else r=a;
	if(r>c)r=c;
	return r;
}

int main(void){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	printf("%d\n",hikaku(a,b,c));
}
