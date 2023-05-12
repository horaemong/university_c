#include <stdio.h>

int num_change(int *, int *);

void main()
{
  int i = 5, j = 10;
  printf("초기상태 : i = %d, j = %d\n", i, j);
  num_change(&i, &j);
  printf("변경 후 : i = %d, j = %d\n", i, j);
}

int num_change(int *i, int *j)
{
  *i += 5;
  *j += 5;
  return 0;
}
