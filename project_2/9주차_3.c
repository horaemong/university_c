#include <stdio.h>

void main()
{
  int i, count = 0, num;
  int arr[5] = {0};

  while (arr[4] == 0)
  {
    printf("숫자를 입력하세요(0입력 또는 배열에 5개가 저장되면 종료) : ");
    scanf_s("%d", &num);
    if (num % 3 == 0)
    {
      arr[count] = num;
      count++;
    }
  }
  for (i = 0; i < 5; i++)
  {
    printf("%7d", arr[i]);
  }
}