#include<stdio.h>
int main()
{
  typedef int *i;
  int j = 10;
  i a = &j;
  printf("%p", a);
  return 0;
}