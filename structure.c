#include <stdio.h>
#include <string.h>

struct student {
  int year;
  int clas;
  int number;
  char name[64];
  double stature;
  double weight;
};

int main(void)
{
  struct student data1,data2;

  data1.year = 3;
  data1.clas = 7;
  data1.number = 12;
  strcpy(data1.name, "SORA");
  data1.stature = 190.5;
  data1.weight = 72.4;

  data2 = data1;

  printf("data1.year = %d : data2.year = %d\n", data1.year,data2.year);
  printf("data1.clas = %d : data2.clas = %d\n", data1.clas,data2.clas);
  printf("data1.number = %d : data2.number = %d\n", data1.number,data2.number);
  printf("data1.name = %s : data2.name = %s\n", data1.name,data2.name);
  printf("data1.stature = %f : data2.stature = %f\n", data1.stature,data2.stature);
  printf("data1.weight = %f : data2.weight = %f\n", data1.weight, data2.weight);

  return 0;
}
