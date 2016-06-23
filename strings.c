#include <stdio.h>

int main(void)
{
  char str[1024];
  int i;

  printf("なんか書いて\n文：");

  fgets(str, sizeof(str), stdin);
  printf("%s", str);

  for (i = 0;str[i] != '\n'; i++);

  printf("%d文字\n", i);

  return 0;
}
