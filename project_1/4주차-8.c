#include <stdio.h>

void main()
{
  int a, b, c;
  for (int i = 0; i < 5; i++)
  {
    printf("두 값을 입력하세요.\n");
    scanf_s("%d %d", &a, &b);
    if (a > b)
    {
      printf("두 값의 차는 %d입니다.\n", a - b);
    }
    else if (a < b)
    {
      printf("두 값의 차는 %d입니다.\n", b - a);
    }
    else
    {
      printf("두 값이 같습니다.\n");
    }
  }
}