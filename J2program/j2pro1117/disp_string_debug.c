#include <stdio.h>

int main(void)
{
  char *pt = "abcdefg";
  char **ptpt;

  printf("%p : ptのアドレス\n", &pt);
  printf("%p : ptの中身\n\n", pt);
  printf("%p : ptptのアドレス\n", &ptpt);
  printf("%p : ptptの中身\n\n", ptpt);
  
  ptpt = &pt;

  printf("%p : ptのアドレス\n", &pt);
  printf("%p : ptの中身\n\n", pt);
  printf("%p : ptptのアドレス\n", &ptpt);
  printf("%p : ptptの中身\n\n", ptpt);
  printf("%s\n",*ptpt);

  printf("%p\n", pt);
  return 0;
}
