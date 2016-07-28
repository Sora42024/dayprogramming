#include <stdio.h>

int main (void){
  char str[101];
  int i, j, k, l;

  printf("おもろい文教えてや\n");
  scanf("%s", str);

  for (i = 0;str[i] != '\0';i++); //カウント変数iでカウント

  k = i; //kに文字数を代入

  if (i % 2 == 0) { //折り返し点をｊ文字目とする
    j = i / 2;
  } else {
    j = (i+1) / 2;
  }

  l = 0;

  for (i = 0;i < j;i++) {
    if (str[i] != str[k-i-1]) {
      l = 1; //判定変数
    }
  }

  if (l == 0) {
    printf("回文やん！おもろいなあ。\n");
  } else {
    printf("うーん。いまいちやな。\n");
  }

  return 0;
}
