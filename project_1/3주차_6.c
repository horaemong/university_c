#include <stdio.h>

void main()
{
  int a, b, c, d, e, f;
  printf("ù��° ��");
  scanf_s("%d", &a);
  printf("�ι�° ��");
  scanf_s("%d", &b);
  c = a + b;
  d = -a + b;
  e = a - b;
  f = a * b;
  printf("����� : %d %d %d %d %d", c, d, e, f, a / b);
}