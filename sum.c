#include <stdio.h>

int main(void){
  int max,min,sum;

  printf("please fill in max and min,and this answers sum.\n");
  scanf("%d%d", &max, &min);

  sum = (max + min) * (max - min + 1) / 2;

  if (sum <= 0){
    sum = sum * (-1);
  }
  printf("%d\n", sum);
  return 0;
}
