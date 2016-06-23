#include <stdio.h>
#include <string.h>

#define STR_LENGTH 256

char *mystrrep(char str1[STR_LENGTH], const char *str2, const char *str3);

int main(void)
{
  char exp[STR_LENGTH];

  printf("スペースを抜きます！\n文：");
  fgets (exp, sizeof(exp), stdin);

  while (strchr(exp,' ')) {
    mystrrep(exp, " ", "");
  }

  printf("%s", exp);

  return 0;
}

char *mystrrep(char str1[STR_LENGTH], const char *str2, const char *str3){
    char temp[STR_LENGTH], *p;  //一時保存配列tempとポインタ操作用変数p

    if (strlen(str1) - strlen(str2) + strlen(str3) >= STR_LENGTH){
        //置換しても領域をオーバーしないかチェック
        printf("置換後の文字数が多すぎます\n");  //オーバーする場合は処理を終了
        return NULL;
    }

    p = str1;   //置換を行う
    if (p = strstr(p, str2)){   //str2のパターンが見つかる時真
        strcpy(temp, p + strlen(str2)); //置換される文字以降を一時保存
        *p = '\0';  //str2が現れる地点で文字列を切る
        strcat(str1, str3); //str3を繋げたあとに
        strcat(str1, temp); //元の文字列のstr2パターン以降を戻す
    }
    return p;
}
