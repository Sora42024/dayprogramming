#include <stdio.h>

void maxminsearch(int array[], int *max, int *min);

int main(void)
{
  int i = 0;
  int max,min;
  int array[11];

  printf("0~100までの数字を１０個まで入力してください。-1を入力したところで終了します。\n");

  do {
    printf("%d番目の数\n", i + 1);
    scanf("%d", &array[i]);
    i++;
  } while (array[i-1] != -1);

  maxminsearch(array, &max, &min);

  printf("Max = %d, Min = %d\n", max, min);

  return 0;
}

void maxminsearch(int array[], int *max, int *min)
{
  int i = 0;
  *max = 0;
  *min = 100;

  while (array[i] != -1) {
    if(array[i] > *max) *max = array[i];
    if(array[i] < *min) *min = array[i];
    i++;
  }
}
