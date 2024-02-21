#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void){
    srand((unsigned)time(NULL));

    char str[N];
    for(int i = 0; i < N; i++){
        str[i] = rand() % 26 + 'a';
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(str[j] > str[j + 1]){
                char tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }

    for(int i = 0; i < N; i++){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
