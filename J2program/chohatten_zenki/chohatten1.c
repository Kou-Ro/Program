#include<stdio.h>
#include<math.h>

int main(void){
	for(int i = 10; i<30 ; i++){
		int n = i;
		int digits = ((int)log10((double)i))+1;
		//printf("%d",digits);
		char dec[digits];
		for(int j = 0; j < digits; j++){
			dec[digits-1-j] = n % 10;
			n/=10;
			//printf("%d",dec[digits-1-j]);
		}
		//printf("\n");

	}
}

