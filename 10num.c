#include <stdio.h>

int main(void)
{
  int array[10];
  int i;

  printf("please tell me 10 numbers;\n");

  for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
  {
    scanf("%d", &array[9-i]);
  }

  for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
  {
  printf("%d ", array[i]);
  }
}
