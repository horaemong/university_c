//#include <stdio.h>
//
//void calculator_add(int, int);
//void calculator_sub(int, int);
//void calculator_mul(int, int);
//
//void main()
//{
//  void (*p[3])(int, int) = {calculator_add, calculator_sub, calculator_mul};
//  int i, a, b;
//  for (i = 0; i < 3; i++)
//  {
//    printf("두 정수를 입력하세요 : ");
//    scanf_s("%d %d", &a, &b);
//    p[i](a, b);
//  }
//}
//
//void calculator_add(int a, int b)
//{
//  printf("%d + %d = %d\n", a, b, a + b);
//}
//
//void calculator_sub(int a, int b)
//{
//  printf("%d - %d = %d\n", a, b, a - b);
//}
//
//void calculator_mul(int a, int b)
//{
//  printf("%d * %d = %d\n", a, b, a * b);
//}
