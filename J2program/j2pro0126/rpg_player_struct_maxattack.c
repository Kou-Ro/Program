#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

struct parameter {
  int no;
  char name[NAME];
  int hp;
  int mp;
  double attack;
  double defence;
};

void initialize(struct parameter player[]);
void disp_array(struct parameter player[]);
void max_attack(struct parameter player[]);

int main(void)
{
  struct parameter player[PLAYER];
  int seed;

  seed = (unsigned)time(NULL);
  printf("seed = %d\n", seed);
  srand(seed);

  initialize(player);

  disp_array(player);
  
  max_attack(player);

  return 0;
}

void initialize(struct parameter player[])
{
  int i, j;

  for (i=0; i<PLAYER; i++) {
    player[i].no = i+1;
    for (j=0; j<NAME-1; j++) { 
      player[i].name[j] = 'a'+rand()%26;
    }
    player[i].name[j] = '\0';
    player[i].hp = rand()%100+1;
    player[i].mp = rand()%101;
    player[i].attack = (double)rand()/RAND_MAX;
    player[i].defence = (double)rand()/RAND_MAX;
  }

}

void disp_array(struct parameter player[])
{
  int i;

  printf("No   Name      HP  MP  AT    DE \n");
  for (i=0; i<PLAYER; i++) {
    printf("[%2d] ", player[i].no);
    printf("%s", player[i].name);
    printf(" ");
    printf("%3d %3d  %.2f  %.2f\n", 
	   player[i].hp, player[i].mp, player[i].attack, player[i].defence);
  }

}

void max_attack(struct parameter player[])
{
  int i;
  double max;
  int index;

  index = 0;
  max = player[index].attack;
  
  for (i=0; i<PLAYER; i++) {
    if (max<player[i].attack) {
      index = i;
      max = player[i].attack;
    }
  }
  
  printf("\n");
  printf("max attack player\n");
  printf("[%2d] ", player[index].no);
  printf("%s", player[index].name);
  printf(" ");
  printf("%3d %3d  %.2f  %.2f\n",
         player[index].hp, player[index].mp, player[index].attack, player[index].defence);

}

