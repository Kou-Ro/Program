#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialize(int array[],int index);
void sort(int array[],int index);
void swap(int *a, int *b);

int main(void)
{
    srand((unsigned)time(NULL));

    for(int i = 100; i <= 100000; i *= 10){
        int array[i];
        int start = clock();
        initialize(array ,i);
        //disp_array(array);
        sort(array, i);
        //disp_array(array);
        int end = clock();
        printf("%d times: %d second\n", i, end - start);
    }

    return 0;
}

void initialize(int array[], int index)
{
    int i;

    for (i=0; i < index; i++) {
        array[i] = rand()%100;
    }
}

void sort(int array[],int index)
{
    int i, j;
    int min_index;

    for (i=0; i<index-1; i++) {
        min_index = i;
        for (j=i+1; j<index; j++) {
            if(array[j]<array[min_index]) {
                min_index = j;
            }
        }
        swap(&array[i], &array[min_index]);
    }

}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
