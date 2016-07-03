#include <stdio.h>
#include <string.h>

typedef struct {
  char name[64];
  int year;
  int sexid;
  char sex[64];
} pdata;

void input(pdata *data);
void output(pdata *data);

int main(void)
{
  pdata data[3];

  input(data);
  output(data);

  return 0;
}

void input(pdata *data)
{
  int i;

  for (i = 0; i <= 2; i++) {
    printf("%d人目の情報を入力してください。\n", i+1);
    printf("[名前]\n");
    scanf("%s", data[i].name);

    printf("[年齢]\n");
    scanf("%d", &data[i].year);

    printf("[性別](1-男性 2-女性)\n");
    scanf("%d", &data[i].sexid);
  }

  return;
}

void output(pdata *data)
{
  int i;

  for (i = 0; i <= 2; i++) {
    if (data[i].sexid == 1) {
      strcpy(data[i].sex, "男性");
    } else if (data[i].sexid == 2) {
      strcpy(data[i].sex, "女性");
    } else {
      strcpy(data[i].sex, "不明");
    }

    printf("%d人目\n", i+1);
    printf("[名前]:%s\n", data[i].name);
    printf("[年齢]:%d\n", data[i].year);
    printf("[性別]:%s\n", data[i].sex);
  }

  return;
}
