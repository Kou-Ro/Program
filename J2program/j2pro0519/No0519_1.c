#include<stdio.h>

int takarakuji(int vol,int no);

int main(void){
	for(int vol=1;vol<=100;vol++){
		//printf("%d",vol);
		for(int no=100000;no<=199999;no++){
			//printf("%d",no);
			if (takarakuji(vol,no)==200000000)printf("%d %d\n",vol,no);
		}
	}

	return 0;
}

