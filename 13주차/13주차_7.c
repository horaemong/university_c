//#include <stdio.h>
//
//static int a;
//
//void main()
//{
//  int i;
//  a = 5;
//  for (i = 0; i < 3; i++)
//  {
//    calc_pro();
//  }
//  printf("최종결과 a = %d\n", a);
//}
//
//int calc_pro()
//{
//  int i;
//  static int j;
//  j += 5;
//  for (i = 0; i <= j; i++)
//  {
//    printf("a의 결과 값 = %d\n", a++);
//    printf("i의 결과 값 = %d\n\n", i);
//  }
//}