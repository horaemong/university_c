#include <stdio.h>

void main()
{
  int arr[] = {1, 2, 3, 4, 5};
  // int i;
  // for (i = 0; i < 5; i++)
  // {
  //   printf("arr[%d]의 값 = %d, 주소값 = %d\n", i, arr[i], &arr[i]);
  // }

  printf("arr 배열의 시작번지 = %d\n", arr);
  printf("arr 배열의 첫 번째 값 = %d\n", arr[0]);
  printf("arr 배열의 첫 번째 값 = %d\n", *arr);
}