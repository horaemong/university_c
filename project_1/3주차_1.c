#include <stdio.h>

void main()
{
  char a = 'A';
  short b = 32760;
  printf("���=%d\n", a + b);
  printf("a�� �޸� ũ��=%d\n", (int)sizeof(a));
  printf("b�� �޸� ũ��=%d\n", (int)sizeof(b));
  printf("a+b�� �޸� ũ��=%d\n", (int)sizeof(a + b));
}