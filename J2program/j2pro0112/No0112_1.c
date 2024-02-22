#include <stdio.h>
#include <stdlib.h>

#define NUM 10
#define MAX 10000

void initialize(int array[]);
void disp_array(int array[]);
void sort(int array[]);
void swap(int *a, int *b);

int main(void)
{
    int array[NUM];

    initialize(array);
    disp_array(array);

    sort(array);

    disp_array(array);

    return 0;
}

void initialize(int array[])
{
    int i;

    srand(0);

    for (i=0; i<NUM; i++) {
        array[i] = rand()%MAX;
    }
}

void disp_array(int array[])
{
    int i;

    for (i=0; i<NUM; i++) {
        printf("%d\n", array[i]);
    }
    printf("\n");

}

void sort(int array[])
{
    int i, j;
    int comparsion = 0;
    int exchange = 0;

    for (i=0; i<NUM-1; i++) {
        for (j=0; j<NUM - 1 - i; j++) {
            comparsion++;
            if (array[j] > array[j+1]) {
                exchange++;
                swap(&array[j], &array[j+1]);
            }
        }
    }

    printf("comparsion = %d\n", comparsion);
    printf("exchange = %d\n", exchange);
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
