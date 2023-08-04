#include<stdio.h>

int calc_sum(int begin,int end);

int main(void){
	int begin=0,end=0;
	printf("begin: ");
	scanf("%d",&begin);
	printf("end  : ");
	scanf("%d",&end);
	int ans=calc_sum(begin,end);
	if(ans==-1){
		printf("error : Please set \"end\" larger than \"begin\".\n");
		return 0;
	}
	printf("ans  : %d\n",ans);

	return 0;
}

int calc_sum(int begin,int end){
	if(begin>end){
		return -1;
	}
	
	return ((end+begin)*(end-(begin-1)))/2;	
}	
