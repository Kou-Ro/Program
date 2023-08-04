#include <stdio.h>
#include <stdlib.h>

void opening(void)
{

}

int get_seed(void)
{

}

int my_rand(int min, int max)
{

}

void disp_status(int hp, int mp, int attack, int defense, int speed)
{

}

int main(void)
{
  int seed;
  int hp, mp, attack, defense, speed;
  
  /* ゲーム開始時メッセージ */
  opening();
    
  /* 乱数の種をキーボードから入力 */
  seed = get_seed();
  srand(seed);

  hp = my_rand(0,10001);
  mp = my_rand(0,10001);
  attack = my_rand(0,101);
  defense = my_rand(0,101);
  speed = my_rand(0,101);

  /* キャラクターのステータスを表示 */
  disp_status(hp, mp, attack, defense, speed);
  
  return 0;
}
