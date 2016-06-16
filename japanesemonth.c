#include <stdio.h>

int main(void){
  int monthnum;

  printf("please tell me what month you want to know in Japanese?(number);");
  scanf("%d", &monthnum);

  switch(monthnum){
    case 1:
      printf("睦月 mutsuki\n");
      break;
    case 2:
      printf("如月 kisaragi\n");
      break;
    case 3:
      printf("弥生 yayoi\n");
      break;
    case 4:
      printf("卯月 uduki\n");
      break;
    case 5:
      printf("皐月 satsuki\n");
      break;
    case 6:
      printf("水無月 minaduki\n");
      break;
    case 7:
      printf("文月 humiduki\n");
      break;
    case 8:
      printf("葉月 haduki\n");
      break;
    case 9:
      printf("長月 nagatsuki\n");
      break;
    case 10:
      printf("神無月 kannaduki\n");
      break;
    case 11:
      printf("霜月 simotuki\n");
      break;
    case 12:
      printf("師走 siwasu\n");
      break;
    default:
      printf("sorry, I can't answer...\n");
      break;
  }

}
