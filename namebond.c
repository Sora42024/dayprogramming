#include <stdio.h>

int main(void)
{
 char name[32], firstname[32], lastname[32];

 printf("please fill in your first name;");
 scanf("%s", firstname);

 printf("please fill in your last name;");
 scanf("%s", lastname);

 sprintf(name, "%s%s", firstname, lastname);
  printf("%s\n", name);
}
