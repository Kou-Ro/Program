#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TIME 1

int makeRandChar(void){
	int n=rand()%(26+26+10);

	if(n<26){
		return n+'a';
	}
	else if(n<26+26){
		return n-26+'A';
	}
	else{
		return n-(26+26)+'0';
	}
}

int main(void){
	srand((unsigned)time(NULL));
	
	for(int j=0;j<TIME;j++){
		char pass[8+1]={0};
		for(int i=0;i<8;i++){
			pass[i]=makeRandChar();
		}
		pass[8]=0;
		printf("%s\n",pass);
	}

	return 0;
}
