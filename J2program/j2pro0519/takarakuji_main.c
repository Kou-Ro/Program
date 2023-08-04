/* 宝くじ
1ユニット 1000万枚
組が1から100組
番号が100000から199999番
100x100000=1000万通り
 */

#include <stdio.h>

int takarakuji(int vol, int no);

int main(void)
{
  int money;
  int vol; // 組
  int no;  // 番号

  vol = 23;
  no = 156124;
  
  money = takarakuji(vol, no);
  printf("money = %u\n", money);

  return 0;
}
