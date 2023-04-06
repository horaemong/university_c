#include <stdio.h>

void main()
{
  char grade;
  int point = 0;
  puts("당신의 등급을 입력하세요.(a, b, c, d, e, f)\n");
  grade = getchar();
  switch (grade)
  {
  case 'a':
  case 'c':
  case 'e':
    point = 10;
    break;
  case 'b':
  case 'd':
    point = 15;
    break;
  case 'f':
    point = 20;
    break;
  default:
    point = 0;
    break;
  }
  printf("당신의 point는 %d입니다.\n", point);
}