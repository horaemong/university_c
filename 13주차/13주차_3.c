//#include <stdio.h>
//
//void calculator_add(int *, int, int);
//void calculator_sub(int *, int, int);
//void calculator_mul(int *, int, int);
//
//int main(void)
//{
//  void (*p[3])(int, int) = {calculator_add, calculator_sub, calculator_mul};
//
//  int choice;
//  int a, b, c = 0;
//
//  printf("메뉴선택\n");
//  printf("1. 덧셈  2. 뺄셈  3. 곱셈\n");
//  scanf_s("%d", &choice);
//  if (choice < 1 || choice > 3)
//  {
//    printf("잘못된 입력입니다.\n");
//    return 0;
//  }
//  printf("두 정수를 입력하세요 : ");
//  scanf_s("%d %d", &a, &b);
//  p[choice - 1](&c, a, b);
//  printf("실행 후 결과 : %d", c);
//}
//
//void calculator_add(int *c, int a, int b)
//{
//  *c = a + b;
//  printf("%d + %d = %d\n", a, b, *c);
//}
//
//void calculator_sub(int *c, int a, int b)
//{
//  *c = a - b;
//  printf("%d - %d = %d\n", a, b, *c);
//}
//
//void calculator_mul(int *c, int a, int b)
//{
//  *c = a * b;
//  printf("%d * %d = %d\n", a, b, *c);
//}
