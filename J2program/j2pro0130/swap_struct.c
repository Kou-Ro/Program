#include <stdio.h>

struct point {
  int x;
  int y;
};

void swap(struct point *a, struct point *b)
{
  struct point tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(void)
{
  struct point player;
  struct point enemy;
  
  player.x = 100;
  player.y = 200;
  enemy.x = 777;
  enemy.y = 888;
  printf("player(%d,%d)\n", player.x, player.y);
  printf("enemy(%d,%d)\n\n", enemy.x, enemy.y);

  swap(&player,&enemy);

  printf("player(%d,%d)\n", player.x, player.y);
  printf("enemy(%d,%d)\n", enemy.x, enemy.y);
  
  return 0;
}
