#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int len;
  char dummy;
  char *name;

  printf("名前の文字数を入力してください:");
  scanf("%d", &len);
  scanf("%c", &dummy);

  name = (char *)malloc(sizeof(char)*(len+1));

  printf("名前をローマ字で入力してください:");
  //scanf("%s", name);
  fgets(name, len+1, stdin);
  
  printf("あなたの名前は%sです\n", name);

  return 0;
}
