#include <stdio.h>

void print_line(int a);

void main()
{
  printf("해당하는 메뉴를 입력하세요\n");
  print_line(20);
  printf("1. 등록작업\n");
  print_line(15);
  printf("2. 조회작업\n");
  print_line(17);
  printf("3. 출력작업\n");
  print_line(19);
}

void print_line(int a)
{
  int i;
  for (i = 0; i < a; i++)
  {
    putchar('-');
  }
  printf("\n");
}
