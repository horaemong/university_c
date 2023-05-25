#include <stdio.h>

void main()
{
  char arr[10];
  char *p = "seoul";

  strcpy_s(arr, sizeof(p), p);
  printf("arr의 내용 : %s\n", arr);
}