#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void rondomIn(char array[]){
	for(int i = 0; i < SIZE; i++){
		array[i] = 'a' + rand()%26;
	}
}

void trans(char array[]){
	for(int i = 0; i < SIZE; i++){
		if(array[i] == 'k'){
			array[i] = 'K';
		}
	}
}

int main(void){
	srand((unsigned)time(NULL));
	
	char array[SIZE+1]={0};
	
	rondomIn(array);
	trans(array);
	
	printf("%s\n", array);
	
	return 0;
}
