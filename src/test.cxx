#include "test.h"
#include "stdio.h"

void test()
{
  printf("It's a test function.\n");
}

int factorial(int n)
{
  if (n <= 1) {
    return 1;
  } else {
    return factorial(n-1)+ factorial(n-2);
  }
}
