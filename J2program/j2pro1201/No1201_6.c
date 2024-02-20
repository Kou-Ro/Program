#include <stdio.h>

int q1_1(void);
int q1_2(void);
int q2(void);
int q3(void);
int q4(void);
int bSumCount(int n);
int wSumCount(int n);

int main(void){
	printf("%d\n",q1_1());
    printf("%d\n",q1_2());
    printf("%d\n",q2());
    printf("%d\n",q3());
    printf("%d\n",q4());
	return 0;
}

int bSumCount(int n){
    int bottom = ((n - 1) / 2) * 2 + 1;
    int count = (n + 1) / 2;
    int sum = (1 + bottom) * count / 2;
}

int wSumCount(int n){
    int bottom = (n / 2) * 2;
    int count = n / 2;
    int sum = (2 + bottom) * count / 2;
}

int q1_1(void){
    return bSumCount(5);
}

int q1_2(void){
    return wSumCount(6);
}

int q2(void){
    int i = 0;
    while(1 == 1){
        if(bSumCount(i) == 36){
            return i;
        }
        i++;       
    }
}
int q3(void){
    return bSumCount(30) + wSumCount(30);
}

int q4(void){
    int i = 0;
    while(1 == 1){
        if(bSumCount(i) + wSumCount(i) == 1275){
            return wSumCount(i);
        }
        i++;
    }
}
