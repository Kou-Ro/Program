#include <stdio.h>
#include <stdlib.h>

#define NUM 20
#define NAME 10

struct products {
    int no;			/* 商品番号 */
    int price;			/* 価格 */
    int country_No;		/* 生産国番号 */
    char country_Name[NAME];	/* 生産国の名前 */
    int year;			/* 発売年 */
};

void initialize(struct products item[]);
void disp(struct products item[]);
double q1(struct products item[]);
int q2(struct products item[]);
void q3(struct products item[], int max);
double q4(struct products item[]);
int q5(struct products car[], struct products bike[]);

int main(void)
{
    struct products car[NUM];
    struct products bike[NUM];

    srand(206);

    initialize(car);
    initialize(bike);

    printf("-- Car --\n");
    disp(car);

    printf("-- Bike --\n");
    disp(bike);
    printf("(1): %lf\n\n", q1(car));
    int max = q2(car);
    printf("(2): %d\n\n", max);
    printf("(3):\n");
    q3(car, max);
    printf("\n");
    printf("(4): %lf\n\n", q4(car));

    return 0;
}

void initialize(struct products item[])
{
    int i;

    for (i=0; i<NUM; i++) {
        item[i].no = rand()%1000;
        item[i].price = rand()%100000;
        item[i].country_No = rand()%5;
        item[i].year = 1990 + rand()%(2017-1990);
    }

    /* 生産国番号から名前を決定 */
    for (i=0; i<NUM; i++) {
        if (item[i].country_No == 0) {
            sprintf(item[i].country_Name, "Japan");
        }
        else if (item[i].country_No == 1) {
            sprintf(item[i].country_Name, "America");
        }
        else if (item[i].country_No == 2) {
            sprintf(item[i].country_Name, "Itary");
        }
        else if (item[i].country_No == 3) {
            sprintf(item[i].country_Name, "France");
        }
        else {
            sprintf(item[i].country_Name, "Other");
        }
    }
}

void disp(struct products item[])
{
    int i, j;

    printf("No    Price   Country   year\n");
    for (i=0; i<NUM; i++) {
        printf("%3d   %5d   %-8s  %4d\n",
                item[i].no,
                item[i].price,
                item[i].country_Name,
                item[i].year);
    }
    printf("\n");
}

double q1(struct products item[]){
    int sum = 0;

    for(int i = 0; i < NUM; i++){
        sum += item[i].price;
    }

    return (double)sum / NUM;
}

int q2(struct products item[]){
    int max = -1;

    for(int i = 0; i < NUM; i++){
        if(item[i].price > max){
            max = item[i].price;
        }
    }

    return max;
}

void q3(struct products item[], int max){
    for(int i = 0; i < NUM; i++){
        if(item[i].price == max){
            printf("%d\n", item[i].no);
        }
    }
}

double q4(struct products item[]){
    int sum = 0;
    int count = 0;

    for(int i = 0; i< NUM;i++){
        if(item[i].country_Name == "Japan"){
            sum += item[i].price;
            count++;
        }
    }

    return (double)sum / count;
}

