#include <stdio.h>

void main()
{
  int price[5] = {3000, 3000, 4000, 4500, 5000};

  int a, sum = 0, price_avg;

  for (int i = 0; i < 5; i++)
  {
    sum += price[i];
  }
  price_avg = sum / 5;
  printf("��ü������ ����� %d�� �Դϴ�.\n", price_avg);
}