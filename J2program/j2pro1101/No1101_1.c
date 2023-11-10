#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	int scores[BUFSIZ];
	for(int i = 0; i < n; i++){
	   scanf("%d", &scores[i]);
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += scores[i];
	}

	printf("%lf\n", (double)sum / n);

	return 0;
}
