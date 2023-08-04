#include<stdio.h>

int pow(int n,int m){
	int r=1;
	for(int i=0;i<m;i++)r*=n;
	return r;
}

int main(void){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	
	printf("%d\n",pow(n,m));
}
