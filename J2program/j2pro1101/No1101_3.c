#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
    scanf("%d", &n);	
    
    int length = log2(n) + 1;
    //double log2n = log2(n);
    //if(log2n - (int)log2n == 0)length = (int)log2n;
    //else length = (int)log2n + 1;


    int *arr = (int*)malloc(sizeof(int) * length);
    
    //printf("%d-%d", n, length);

    for(int i = 0; i < length; i++){
    	arr[i] = n % 2;
        n /= 2;
    }

    for(int i = length - 1; i >= 0; i--){
    	printf("%d", arr[i]);
    }
        
    printf("\n");

    free(arr);

	return 0;
}
