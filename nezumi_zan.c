#include <stdio.h>

int main(void)
{
  int month = 1;
  int money = 1;

  printf("%dヶ月目：%8d円\n", month, money);
  while (money < 10000000)
  {
  money += money * 2;
  month++;

  printf("%dヶ月目：%8d円\n", month, money);
  }

  printf("10000000円貯めるまでには%dヶ月かかる\n", month);
  return 0;
}
