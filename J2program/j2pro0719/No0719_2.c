#include <stdio.h>

int main(void){
	char plaintext[] = "hayakukoikoinastsuyasumi";
	int key=1;
	
	if(key<0){
		key+=26;
	}
	
	for(int i=0; plaintext[i] != 0; i++){
		plaintext[i] = ((plaintext[i]+key-'a') % 26) + 'a';
	}

	printf("%s\n",plaintext);

	return 0;	
}
