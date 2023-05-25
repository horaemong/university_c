#include <stdio.h>

void main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *p_arr = arr;
  int i;
  for (i = 0; i < 5; i++)
  {
    // printf("arr[%d]의 값 = %d\n", i, *p_arr++);
    printf("arr[%d]의 값 = %d\n", i, *(p_arr + i));
  }
}