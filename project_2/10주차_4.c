#include <stdio.h>

int dbl_process(int arr[], int length);

void main()
{
  int arr[] = {12, 25, 9, 33, 45, 60, 23, 95, 75, 105, 160};
  int length = sizeof(arr) / sizeof(*arr);

  for (int i = 0; i < length; i++)
  {
    printf("%5d", arr[i]);
  }
  printf("배열에서 3과 5의 공배수는 %d개입니다.\n", dbl_process(arr, length));
}

int dbl_process(int arr[], int length)
{
  int total = 0;
  printf("\n");
  for (int i = 0; i < length; i++)
  {
    if (arr[i] % 15 == 0)
    {
      total += 1;
      printf("3과 5의 공배수는 %d이다.\n", arr[i]);
    }
  }
  return total;
}
