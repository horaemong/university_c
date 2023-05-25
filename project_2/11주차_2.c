#include <stdio.h>

void main()
{
  int a = 5, b = 10, *p_1 = &a, *p_2 = &b;
  double c = 3.14, *p_3 = NULL;
  p_3 = &c;

  printf("포인터 p_1 = %d, a = %d\n", *p_1, a);
  printf("p_3의 값 = %f\n", *p_3);
  printf("p_3의 재계산 = %d\n", *(p_3 = &b));
}