#include <stdio.h>

void main()
{
  char strarr[7] = {'s', 'a', 'm', 'p', 'l', 'e', '\0'};
  char strarr2[] = "sample";
  printf("strarr의 내용 = %s\n", strarr);
  printf("strarr2의 내용 = %s\n", strarr2);
  for (int i = 0; i < 3; i++)
  {
    printf("%c", strarr[i]);
  }
}