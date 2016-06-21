#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define  NMAX  100
char *token[NMAX];
int  ix;

void lexer(char *text) {
    int i, bgn;

    ix = 0;
    for (i = 0; text[i] != '\0'; ) {
        if (text[i] <= ' ') {               // 空白文字
            i++;
            continue;
        }
        bgn = i;
        if (text[i] == '0' && text[i+1] == 'x') {     // １６進数
            while (isalnum(text[i])) i++;
        }else if (isdigit(text[i])) {             // 数値
            while (isdigit(text[i]) || text[i] == '.') i++;
        } else if (isalpha(text[i])) {      // 識別子または予約語
            while (isalnum(text[i])) i++;
        } else {                            // 演算子および記号
            i++;
        }
        token[ix] = malloc(i-bgn+1);
        strncpy(token[ix], &text[bgn], i-bgn);
        token[ix][i-bgn] = '\0';             // 文字列末尾にヌル文字を付加
        ix++;
    }
}

void main() {
    char buf[1024];
    int n;

    printf("構文を入力し、リターンキーを押してください\n文：");
    fgets(buf, sizeof(buf), stdin);
    lexer(buf);
    printf("トークン列：");
    for (n = 0; n < ix; n++) {
        printf("%s%s", token[n], (n<ix-1 ? " " : "\n"));
        free(token[n]);		// mallocで獲得した文字列を解放
    }
}
