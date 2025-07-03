#include <stdio.h>

int Harshad(int n)
{
  int sum = 0;

  while (n > 0)
  {
    int digit = n % 10;
    sum = sum + digit;
    n = n / 10;
  }
  return sum;
}

int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d", &n);

  int sum = Harshad(n);
  if (n % sum == 0)
  {
    printf("Harshad number");
  }
  else
  {
    printf("Not a harshad number");
  }

  return 0;
}