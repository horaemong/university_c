#include <stdio.h>

void main()
{
  float a, b;
  printf("�� ���� �Է��ϼ���\n");
  scanf_s("%f %f", &a, &b);
  printf("%5.2f + %5.2f = %5.2f\n", a, b, a + b);
  printf("%5.2f - %5.2f = %5.2f\n", a, b, a - b);
  printf("%5.2f * %5.2f = %5.2f\n", a, b, a * b);
  printf("%5.2f / %5.2f = %5.2f\n", a, b, a / b);
  printf("%d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
}