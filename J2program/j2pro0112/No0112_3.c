#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100000
#define MAX 10000

void initialize(int array[]);
void disp_array(int array[]);
double bubble_sort(int array[]);
double selection_sort(int array[]);
void swap(int *a, int *b);
int cmp(const void *a, const void *b);

int main(void)
{
    int bubble_array[NUM];
    int selection_array[NUM];
    int quick_array[NUM];

    initialize(bubble_array);
    //disp_array(bubble_array);
    printf("\n");

    for(int i=0; i<NUM; i++){
        selection_array[i] = bubble_array[i];
        quick_array[i] = bubble_array[i];
    }


    double bubbleTime = bubble_sort(bubble_array);
    printf("Bubble Sort:\n");
    //disp_array(bubble_array);
    printf("Time: %lf\n\n", bubbleTime);
    double senlectionTime = selection_sort(selection_array);
    printf("Selection Sort:\n");
    //disp_array(selection_array);
    printf("Time: %lf\n\n", senlectionTime);
    double start = clock();
    qsort(quick_array, NUM, sizeof(int), cmp);
    double end = clock();
    double quickTime = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Quick Sort:\n");
    //disp_array(quick_array);
    printf("Time: %lf\n\n", quickTime);

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
}

double bubble_sort(int array[])
{
    int i, j;

    clock_t start = clock(); 
    for (i=0; i<NUM-1; i++) {
        for (j=0; j<NUM - 1 - i; j++) {
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
    clock_t end = clock();
    
    return (double)(end - start)/CLOCKS_PER_SEC;
}

double selection_sort(int array[])
{
    int i, j, min;
    
    clock_t start = clock();
    for (i=0; i<NUM-1; i++) {
        min = i;
        for (j=i+1; j<NUM; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        swap(&array[i], &array[min]);
    }
    clock_t end = clock();

    return (double)(end - start)/CLOCKS_PER_SEC;
}

int cmp(const void *a, const void *b)
{
    if(*(int *)a > *(int *)b){
        return 1;
    }
    else if(*(int *)a < *(int *)b){
        return -1;
    }
    else{
        return 0;
    }
}

void swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
