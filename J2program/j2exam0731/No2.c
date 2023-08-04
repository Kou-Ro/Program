#include <stdio.h>

#define RET printf("\n")

void dispString(char str[]);
void dispStringReverse(char str[]);
void dispWord(char str[]);
void dispWordCount(char str[]);
void dispWordMax(char str[]);

int main(void)
{
  char str[] = "apple,grape,pineapple,strawberry,lemon,orange";

  printf("(1)\n");
  dispString(str);

  
  printf("(2)\n");
  dispStringReverse(str);

  
  printf("(3)\n");
  dispWord(str);


  printf("(4)\n");
  dispWordCount(str);


  printf("(5)\n");
  dispWordMax(str);


  return 0;
}


/*******
 * (1)
 *******/
void dispString(char str[])
{
	printf("%s", str);
	RET;RET;
}


/*******
 * (2)
 *******/
void dispStringReverse(char str[])
{
	int size = 0;
	for(; str[size] != 0; size++);
	size++;
	for(int i = 0; i < size; i++){
		printf("%c", str[size-(i+1)]);
	}
	RET;RET;
}

/*******
 * (3)
 *******/
void dispWord(char str[])
{
	for(int i = 0; str[i] != 0; i++){
		if(str[i] == ',') RET;
		else printf("%c", str[i]);
	}
	RET;RET;
}


/*******
 * (4)
 *******/
void dispWordCount(char str[])
{
	int count = 0;
	for(int i = 0; str[i] != 0; i++){
		if(str[i] == ','){
			printf("%d ", count);
			count = 0;
		}
		else{
			count++;
		}
	}
	printf("%d",count);
	RET;RET;
}


/*******
 * (5)
 *******/
void dispWordMax(char str[])
{
	int count = 0;
	int max = 0;
	int maxInd = 0;
	for(int i = 0; str[i] != 0; i++){
		if(str[i] == ','){
			if(count > max){
				max = count;
				maxInd = i;
			}
			count = 0;
		}
		else{
			count++;
		}
	}

	char word[BUFSIZ]={0};
	for(int i = maxInd - 1; str[i] != ','; i--){
		word[(maxInd - 1)-i] = str[i];
	}

	int size = 0;
	for(; word[size] != 0; size++);
	size++;
	for(int i = 0; i < size; i++){
		printf("%c", word[size-(i+1)]);
	}
	RET;
}	
