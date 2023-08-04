#include<stdio.h>

char my_toupper(char ch){
	if(ch>='a' && ch<='z'){
		return ch-'a'+'A';
	}
	else{
		return ch;
	}
}

int main(void){
	char ch=0;

	scanf("%c",&ch);

	printf("%c\n",my_toupper(ch));

	return 0;
}
