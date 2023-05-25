#include <stdio.h>

// long cube(long x);
long input, answer;

void main()
{
  printf("정수 값을 입력하세요. : ");
  scanf_s("%d", &input);
  answer = cube(input);
  printf("큐브의 값은 %d는 결과 %ld입니다.\n", input, answer);
}

long cube(long x)
{
  long x1;
  x1 = x * x * x;
  return x1;
}