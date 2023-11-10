#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
    scanf("%d", &n);	

	char *scores = (char *)malloc(sizeof(char) * ((n / 2) + 1));
	
	for(int i = 0; i < ((n / 2) + 1); i++){
		scores[i] = 0;
	}

	for(int i = 0; i < n; i++){
		char corrent; 
		scanf("%d", &corrent);
		if(i % 2 == 0){
			corrent
			/////////////////
		    //// Writing ////
			/////////////////
	}
    
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += scores[i];
	}

	printf("%lf\n", (double)sum / n);
	
	return 0;
}
