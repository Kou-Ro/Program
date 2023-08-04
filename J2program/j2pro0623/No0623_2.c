#include<stdio.h>

int main(void){
	char c;

	scanf("%c",&c);
	
	if(c>='a' && c<='z'){
		printf("%c\n",c);
	}
	else{
		printf("error\n");
	}

	return 0;
}
