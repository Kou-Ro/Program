#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    
    int n;
    //scanf("%d", &n);
    n = rand() % (32 - 7) + 8;

    char *pass = (char *)malloc(sizeof(char) * (n + 1));


    for(int i = 0; i < n; i++){
        pass[i] = rand() % ('z' - 'a' + 1) + 'a'; 
    }

    pass[n] = '\0';

    printf("%s\n", pass);
}
