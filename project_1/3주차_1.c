#include <stdio.h>

void main()
{
  char a = 'A';
  short b = 32760;
  printf("결과=%d\n", a + b);
  printf("a의 메모리 크기=%d\n", (int)sizeof(a));
  printf("b의 메모리 크기=%d\n", (int)sizeof(b));
  printf("a+b의 메모리 크기=%d\n", (int)sizeof(a + b));
}