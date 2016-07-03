#include <stdio.h>
#include <string.h>

typedef struct {
  int year;
  int clas;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

void student_print(student data);

int main(void)
{
  student data;

  data.year = 3;
  data.clas = 3;
  data.number = 24;
  strcpy(data.name, "MARIO");
  data.stature = 155.9;
  data.weight = 65.2;

  student_print(data);

  return 0;
}

void student_print(student data)
{
  printf("[学年]:%d\n", data.year);
  printf("[クラス]:%d\n", data.clas);
  printf("[出席番号]:%d\n", data.number);
  printf("[名前]:%s\n", data.name);
  printf("[身長]:%f\n", data.stature);
  printf("[体重]:%f\n", data.weight);
  return;
}
