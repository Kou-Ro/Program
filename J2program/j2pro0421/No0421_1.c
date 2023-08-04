#include <stdio.h>

int main(void){
	printf("aaaaaaaaa");
	for(int i=10;1==1;i++){
		int num=i;
		int j=0;
		int a=1;
		printf("hello");
		while(1==1){
			if(a>i)break;
			j++;
			a*=10;
		}
		printf("hi");
		a/=10;
		int ar[j];
		printf("%d",a);
		for(int k=j-1;k>=0;k++){
			printf("%d",num);
			ar[k]=num/a;
			num=num%a;
			a/=10;
		}
//		for(int k=0;k<j;k++)
//		{
//			if(ar[k]!=ar[j-k])continue;
//		}
		printf("%d",i);
		return 0;
	}
}
