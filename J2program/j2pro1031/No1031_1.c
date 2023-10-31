#include <stdio.h>

void input(int arr[4][3]);
void output(int arr[4][3]);

int main(){
	int arr[4][3];
	input(arr);

	output(arr);

	return 0;
}

void input(int arr[4][3]){
	for(int i = 0; i < 12; i++){
		arr[i/3][i%3] = i;
	}
}

void output(int arr[4][3]){
	for(int i = 0; i < 12; i++){
		printf("%d\n", arr[i/3][i%3]);
	}
}
