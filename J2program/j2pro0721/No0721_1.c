#include <stdio.h>
#include <math.h>

int main(void){
	char plainText[] = "KKKHHGAAAAA";
	char ranText[BUFSIZ]={0};
	int ranCount=0;

	char ci = plainText[0];
	int count = 0;
	for(int i = 0; plainText[i] != 0; i++){
		if(plainText[i] == ci){
			count++;
		}
		else{
			ranText[ranCount] = ci;
			ranText[ranCount + 1] = (char)count+48;
			ranCount += 2;
			
			ci = plainText[i];
			count = 1;
		}
	}
	
	ranText[ranCount] = ci;
	ranCount++;
	int numDig = (int)log_10((double)count);
	for(int i = 0; i < numDig; i++){
		ranText[ranCount] = (char)//ここまで

	ranText[ranCount + 1] = (char)count+48;
	

	printf("%s\n",ranText);

	return 0;
}
