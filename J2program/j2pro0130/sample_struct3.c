#include <stdio.h>

struct point {
  int x;
  int y;
};

void func1(struct point *pt)
{
  (*pt).x = 777;
  (*pt).y = 888;
}

void func2(struct point *pt)
{
  pt->x = 1000;
  pt->y = 2000;
}

int main(void)
{
  struct point player;
  
  player.x = 2;
  player.y = 3;

  printf("player(%d,%d)\n", player.x, player.y);

  func1(&player);
  printf("player(%d,%d)\n", player.x, player.y);

  func2(&player);
  printf("player(%d,%d)\n", player.x, player.y);

  
  return 0;
}
