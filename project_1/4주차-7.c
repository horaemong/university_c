#include <stdio.h>

void main()
{
  int a;
  for (int i = 0; i < 5; i++)
  {
    printf("a���� �Է��ϼ���\n");
    scanf_s("%d", &a);
    if (a % 2 == 0)
    {
      printf("%d�� ¦���Դϴ�.\n", a);
    }
    else
    {
      printf("%d�� Ȧ���Դϴ�.\n", a);
    }
  }
}