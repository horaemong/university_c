#include <stdio.h>

void main()
{
  char strarr[10];
  char *arr = "world";
  strcpy_s(strarr, sizeof(strarr), arr);
  strarr[0] = 't';
  printf("수정 후 결과 : %s\n", strarr);
}
