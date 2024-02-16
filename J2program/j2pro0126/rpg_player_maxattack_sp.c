#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

void initialize(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[]);
void disp_array(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[]);
void max_attack(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[]);


int main(void)
{
  int no[PLAYER];
  char name[PLAYER][NAME];
  int hp[PLAYER];
  int mp[PLAYER];
  double attack[PLAYER];
  double defence[PLAYER];
  double speed[PLAYER];
  int seed;
  
  seed = (unsigned)time(NULL);
  printf("seed = %d\n", seed);
  srand(seed);

  initialize(no, name, hp, mp, attack, defence, speed);

  disp_array(no, name, hp, mp, attack, defence, speed);

  max_attack(no, name, hp, mp, attack, defence, speed);
  
  return 0;
}

void initialize(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[])
{
  int i, j;

  for (i=0; i<PLAYER; i++) {
    no[i] = i+1;
    for (j=0; j<NAME-1; j++) { 
      name[i][j] = 'a'+rand()%26;
    }
    name[i][j] = '\0';
    hp[i] = rand()%100+1;
    mp[i] = rand()%101;
    attack[i] = (double)rand()/RAND_MAX;
    defence[i] = (double)rand()/RAND_MAX;
    speed[i] = (double)rand()/RAND_MAX;
  }

}

void disp_array(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[])
{
  int i;

  printf("No   Name      HP  MP  AT    DE    SP\n");
  for (i=0; i<PLAYER; i++) {
    printf("[%2d] ", no[i]);
    printf("%s", name[i]);
    printf(" ");
    printf("%3d %3d  %.2f  %.2f  %0.2f\n", hp[i], mp[i], attack[i], defence[i], speed[i]);
  }

}

void max_attack(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[], double speed[])
{
  int i;
  double max;
  int index;

  index = 0;
  max = attack[index];
  
  for (i=0; i<PLAYER; i++) {
    if (max<attack[i]) {
      index = i;
      max = attack[i];
    }
  }

  printf("\n");
  printf("max attack player\n");
  printf("[%2d] ", no[index]);
  printf("%s", name[index]);
  printf(" ");
  printf("%3d %3d  %.2f  %.2f\n",
	 hp[index], mp[index], attack[index], defence[index]);
}
