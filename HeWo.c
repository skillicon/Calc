#include <stdio.h>

int addition(int n1, int n2)
{
  return (n1 + n2);
}

int main()
{
  int num1, num2, result;
  printf("Enter 2 numbers: ");
  scanf("%d%d", &num1, &num2);

  result = addition(num1, num2);
  printf("Sum of %d and %d is %d", num1, num2, sum);
  
  return 0;
}
