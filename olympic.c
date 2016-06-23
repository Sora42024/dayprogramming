#include <stdio.h>

int olympic(int);

int year, hold;

int main(void)
{
  do {
    printf("オリンピックが開かれるかを答えます（２０００年以降）。西暦を入力してください。\n");
    scanf("%d", &year);
  } while (year < 2000);

  hold = olympic(year);

  switch (hold){
    case 0: printf("開かれません。\n");
            break;
    case 1: printf("冬季オリンピックが開かれます\n");
            break;
    case 2: printf("夏季オリンピックが開かれます。\n");
            break;
  }

  return 0;
}

int olympic(int year)
{
  if (year % 2 == 0){
    if (year % 4 == 0){
      return 1;
    } else {
      return 2;
    }
  } else {
    return 0;
  }
}
