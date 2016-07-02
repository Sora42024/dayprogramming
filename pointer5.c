#include <stdio.h>

int main(void)
{
  char array[] = "A121CDG";
  char *p;

  p = array;

  printf("_array___(%p)\n", array);
  printf("_array[0](%c)\n", array[0]);
  printf("&array[1](%p)\n", &array[1]);
  printf("p________(%p)\n", p);
  printf("p[0]_____(%c)\n", p[0]);
  printf("p________(%s)\n", p);

  return 0;
}
