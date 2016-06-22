#include <stdio.h>

int tloan(int money);
int floan(int money);

int mode;
int money, goal, year;
float rate;

int main(void)
{
  printf("元金と利子率をカンマで区切って入力してください。\n");
  scanf("%d,%f", &money, &rate);

  printf("何年預けるかを年単位で入力してください。\n");
  scanf("%d", &year);

  printf("単利？複利？(単利なら１、複利なら２を入力)\n");
  scanf("%d", &mode);

  if (mode == 1) {
    tloan(money);
  } else if (mode == 2) {
    floan(money);
  } else {
    printf("入力エラー\n");
  }

  return 0;
}

int tloan(int money)
{
  int i;
  int interest = 0;

  for (i = 1;i <= year;i++)
  {
    interest += money * rate * 0.01;
  }

  printf("%d年後に預金額は%d円となります。\n", year, money + interest);

  return 0;
}

int floan(int money)
{
  int i;

  for (i = 1;i <= year;i++)
  {
    money += money * rate * 0.01;
  }

  printf("%d年後に預金額は%d円となります。\n", year, money);

  return 0;
}
