#include <stdio.h>

int main(void){
	char cyphertext[] ="lpvtfotbjlpvuboptijjob";
	int key=1;
	for(int i;cyphertext[i]!=0;i++){
		cyphertext[i]=cyphertext[i]-1;
		if(cyphertext[i]<'a'){
			cyphertext[i]='z'-('a'-cyphertext[i]-1);
		}
	}
	printf("%s\n",cyphertext);
}
