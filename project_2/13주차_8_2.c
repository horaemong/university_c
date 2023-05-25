#include <stdio.h>

calc_one()
{
  extern int a;
  printf("공유된 변수 a의 값 = %d\n", a);
}