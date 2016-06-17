#include <stdio.h>

int main(void){
  int year;

  printf("'How old do you think I am?'\nPlease your answer;");

  do {
    scanf("%d", &year);
    if (year < 18 || year > 29){
      printf("Oh, my god. Don't tell joke.\nI want you to tell truth.\n");
      printf("Please your true feeling;");
    } else {
      printf("Thank you, good boy.\n");
    }
  } while (year < 18 || year > 29);

  return 0;
}
