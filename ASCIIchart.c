#include <stdio.h>

int main(void)
{
  int i = 0;
  char c = 'A';
  for(i = 0; i <= 'Z' - 'A'; i++)
  {
    printf("%d ", c + i);
    printf("%c\n", c + i);
  }
}
