#include <stdio.h>

int add_numbers(int a);

int main(void)
{
  int sum;
  sum = add_numbers(1000);
  printf("The summation of the numbers starting from 1 to 1000 is %d\n", sum);
  return 0;
}

int add_numbers(int n)
{
  if (n != 0)
  {
    return n + add_numbers(n - 1);
  }
  else
  {
    return n;
  }
}
