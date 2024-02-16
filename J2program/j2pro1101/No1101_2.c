#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);

	int *scores = (int*)malloc(n*sizeof(int));
	for(int i = 0; i < n; i++){
	   scanf("%d", &scores[i]);
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += scores[i];
	}

	printf("%lf\n", (double)sum / n);
    
    free(scores);

	return 0;
}
