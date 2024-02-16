#include <stdio.h>

struct point {
  int x;
  int y;
};

int main(void)
{
  struct point player;
  struct point *pt;
  
  player.x = 2;
  player.y = 3;

  printf("player(%d,%d)\n", player.x, player.y);

  pt = &player;
  (*pt).x = 100;
  
  printf("*pt(%d,%d)\n", (*pt).x, (*pt).y);
  printf("player(%d,%d)\n", player.x, player.y);
  
  return 0;
}
