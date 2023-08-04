/*-------------------------------------------------------------------------
kokalib v1.1.1
いろいろな関数を用意しています。sugoi

作成者:kokastar(GitHub:starkoka)
最終更新:2023/6/2
-------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int randNum(int min,int max);
int putint(void);
int stop(int sec,int nsec);

int main(){
	char str[20+1];
	for(int i=0;i<20;i++){
		str[i]=randNum('A','Z');
	}
	str[20]='\0';
	for(int i=0;i<20;i+=2){
		str[i]=str[i]+('a'-'A');
	}
	
	printf("%s\n",str);
	return 0;
}


/*-------------------------------------------------------------------------
name : randNum
explanation : min~maxまでの乱数を返す。
return : int(エラー時-1)

min : 最小値。正の整数のみを受け付ける
max : 最大値。正の整数のみを受け付ける
-------------------------------------------------------------------------*/

int randNum(int min,int max){
	static int flag = 0;
	if(flag == 0){
		flag = 1;
		srand((unsigned)time(NULL));
	}

	if(min >= 0 && max >= 0 && min<max){
		return rand()%(max-min+1)+min ;
		flag = 1;
	}
	else{
		return -1;
	}
}

/*-------------------------------------------------------------------------
name : putint
explanation : intの入力を受け取る。
return : int
-------------------------------------------------------------------------*/

int putint(void){
	int num;
	scanf("%d",&num);
	return num;
}

/*------------------------------------------------------------------------
name : stop
explanation : 指定した時間プログラムを待機させる
return : なし

int sec  : 停止時間[s]
int nsec : 停止時間[ns]
-------------------------------------------------------------------------*/

int stop(int sec,int nsec){
	struct timespec ts,rem;
	ts.tv_sec = sec;
	ts.tv_nsec = nsec;

	nanosleep(&ts,&rem);
}
