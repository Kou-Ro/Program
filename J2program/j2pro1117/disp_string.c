#include <stdio.h>

int main(void)
{
  char *pt = "abcdefg";
  char **ptpt;

  ptpt = &pt;

  printf("%s\n",*ptpt);

  return 0;
}
