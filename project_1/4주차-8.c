#include <stdio.h>

void main()
{
  int a, b, c;
  for (int i = 0; i < 5; i++)
  {
    printf("�� ���� �Է��ϼ���.\n");
    scanf_s("%d %d", &a, &b);
    if (a > b)
    {
      printf("�� ���� ���� %d�Դϴ�.\n", a - b);
    }
    else if (a < b)
    {
      printf("�� ���� ���� %d�Դϴ�.\n", b - a);
    }
    else
    {
      printf("�� ���� �����ϴ�.\n");
    }
  }
}