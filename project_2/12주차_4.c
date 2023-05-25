#include <stdio.h>

void main()
{
  char strarr[] = "very easy";
  char *p_arr = strarr;

  strarr[0] = 'm';
  strarr[1] = 'o';
  strarr[2] = 'r';
  strarr[3] = 'e';
  printf("strarr의 내용 : %s, p_arr의 내용 : %s\n", strarr, p_arr);
}