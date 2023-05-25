#include <stdio.h>

typedef struct student
{
  char *hno;
  char *name;
  int kor, eng, math;
} People;

void main()
{
  // struct student people;
  People a1;

  a1.hno = "09-001";
  a1.name = "홍길동";
  a1.kor = 90;
  a1.eng = 80;
  a1.math = 70;
  printf("이름 : %s, 국어첨수 : %d, \n", a1.name, a1.kor);
}