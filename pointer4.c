#include <stdio.h>

int main(void)
{
  int *data;
  int i;
  int average = 0;
  int array[10] = {21, 434, 56, 4543, 76, 43, 3, 667, 463, 1};

  data = array;

  for(i = 0;i < 10;i++){
    average += data[i];
  }

  printf("average = %d\n", average);

  return 0;
}
