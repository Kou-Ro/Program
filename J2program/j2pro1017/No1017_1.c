#include <stdio.h>

int time10(int *n, int *m){
	*n *= 10;
	*m *= 10;
}

int main(){
	int n,m;

	scanf("%d%d",&n,&m);

	time10(&n,&m);

	printf("%d %d\n",n,m);
}
