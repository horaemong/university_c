#include <stdio.h>
#include <limits.h>
#include <float.h>

void main()
{
  printf("int���� �ּڰ� = %d\n", INT_MIN);
  printf("int���� �ִ� = %d\n", INT_MAX);
  printf("float���� �ּڰ� = %f\n", FLT_MIN);
  printf("float���� �ִ� = %f\n", FLT_MAX);
  printf("double���� �ִ� = %f\n", DBL_MAX);
  printf("int�� �޸�ũ��=%d\n", (int)sizeof(int));
  printf("long�� �޸�ũ��=%d\n", (int)sizeof(long));
  printf("double�� �޸�ũ��=%d\n", (int)sizeof(double));
}