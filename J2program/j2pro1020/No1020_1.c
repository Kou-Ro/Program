#include <stdio.h>

int main(){
	int arg[10];
	for(int i = 0; i < 10; i++){
		*(arg + i) = 0;
	}
}
