#include <stdio.h>

void main()
{
  int a;
re:
  puts("값을 입력하세요.");
  scanf_s("%d", &a);
  if (a >= 10)
  {
    puts("10보다 큰 수를 입력했군요.\n");
  }
  else
  {
    puts("10보다 작은 수를 입력했군요.\n");
    goto re;
  }
}