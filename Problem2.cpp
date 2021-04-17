#include <stdio.h>
int main()
{
  int x, y = 0, z;

  printf("Enter a number:");
  scanf("%d", &x);

  z = x;

  while (z != 0)
  {
    y = y * 10;
    y = y + z%10;
    z = z / 10;
  }

  if (x == y)
    printf("It is a palindrome number.\n", x);

  else
    printf("It isn't a palindrome number.\n", x);

  return 0;
}
