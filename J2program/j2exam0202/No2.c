#include <stdio.h>
#include <stdlib.h>

#define NUM 500
#define MAX 1000

void initialize(int data[]);
void disp_top10(int data[]);
int get_sum(int data[]);
void sort(int data[]);
double center(int data[]);
void most(int data[]);
void swap(int *a, int *b);

int main(void)
{
    int data[NUM];
    double median;
    int mode;
    int prime_ct;

    srand(202);

    initialize(data);	
    disp_top10(data);
    
    // (1)
    printf("(1): %d\n\n", get_sum(data));

    // (2)
    sort(data);
    printf("(2):\n");
    disp_top10(data);

    // (3)
    printf("(3): %lf\n\n", center(data));

    printf("(4):\n");
    most(data);
    

    return 0;
}

void initialize(int data[])
{
    int i;

    for (i=0; i<NUM; i++) {
        data[i] = rand()%MAX;
    }
}

void disp_top10(int data[])
{
    int i;

    for (i=0; i<10; i++) {
        printf("%2d %3d\n", i, data[i]);
    }
    printf("\n");
}

int get_sum(int data[]){
    int sum = 0;
    for(int i = 0; i < NUM; i++){
        sum += data[i];
    }

    return sum;
}

void sort(int data[]){
    for(int i = 0; i < NUM - 1; i++){
        int maxin = i;
        for(int j = 0; j < NUM; j++){
            if(data[j] > data[maxin]){
                maxin = j;
            }
        }
        swap (&data[i], &data[maxin]);
    }
}

double center(int data[]){
    switch (NUM % 2){
        case 0:
            return (double)(data[NUM / 2 - 1] + data[NUM / 2]) / 2;
            break; // Not used
        case 1:
            return (double)(data[NUM / 2]);
            break; // Not used
    }
}

void most(int data[]){
    int count[MAX] = {0};
    
    for(int i = 0; i < NUM; i++){
        count[data[i]]++;
    }

    int max = -1;

    for(int i = 0; i < MAX; i++){
        if(count[i] > max){
           max = count[i];
        }
    }

    for(int i = 0; i < MAX; i++){
        if(count[i] == max){
            printf("%d\n", i);
        }
    }
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
