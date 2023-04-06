#include <stdio.h>

void main()
{
  int a, i = 1, j, sum;
  while (i <= 3)
  {
    sum = 0;
    j = 1;

    puts("정수를 입력하세요.");
    scanf_s("%d", &a);

    while (j <= a)
    {
      sum += j;
      j++;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", a, sum);

    i++;
  }
}