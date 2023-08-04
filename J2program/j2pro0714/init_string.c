#include <stdio.h>
#include <string.h>

#define NUM 5

void disp_string(char s[]);

int main(void)
{
  char str1[5+1] = {'a', 'b', 'c', 'd', 'e','\0'};
  char str2[5+1] = {97, 98, 99, 100, 101,'\0'};
  char str3[5+1] = "abcde";
  char str4[] = "abcde";
  char str5[3+1];

  disp_string(str1);
  disp_string(str2);
  disp_string(str3);
  disp_string(str4);

  // 次のように，初期化以外で文字列リテラルを与えることはできない．
  //str5 = "abcde";

  // 初期化以外で文字を与える場合，1文字ずつ与える．
  str5[0] = 's';
  str5[1] = 't';
  str5[2] = 'u';
  str5[3] = '\0';
  disp_string(str5);

  // あるいはANSI Cライブラリ関数を使う．
  strcpy(str5, "xyz");
  disp_string(str5);
  
  return 0;
}

void disp_string(char s[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    printf("%c", s[i]);
  }
  printf("\n");
}
