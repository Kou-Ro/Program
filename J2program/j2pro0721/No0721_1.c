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
			ranCount++;
			int numDig = (int) log10((double) count) + 1;
			for(int i = 0; i < numDig; i++){
				ranText[ranCount] = (char) (count / pow(10, numDig - 1 - i)) + '0';
				ranCount++;
				count %= (int)pow(10, numDig - 1 - i);
			}

			ci = plainText[i];
			count = 1;
		}
	}


	ranText[ranCount] = ci;
	ranCount++;
	int numDig = (int) log10((double) count) + 1;
	for(int i = 0; i < numDig; i++){
		ranText[ranCount] = (char) (count / pow(10, numDig - 1 - i)) + '0';
		ranCount++;
		count %= (int)pow(10, numDig - 1 - i);
	}

	ranText[ranCount] = 0;
	ranCount++;

	printf("%s\n",ranText);

	return 0;
}
