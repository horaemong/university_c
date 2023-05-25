#include <stdio.h>

void main()
{
  char c = 'A';
  int i = 5;
  char *p_c = &c;
  int *p_i = &i;

  printf("c의 값: %c, cp의 값: %c\n", c, (*p_c)++);
  printf("i의 값: %d, ip의 값: %d\n", i, *p_i += 1);
  printf("%c\n", *p_c + 1);
}