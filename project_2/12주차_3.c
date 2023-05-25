#include <stdio.h>

void main()
{
  int arr[] = {10, 20, 30, 40};
  int *p_arr = arr;
  printf("arr배열의 전체 크기 : %d\n", sizeof(arr));
  printf("p_arr의 전체 크기 : %d\n", sizeof(*p_arr));
}