#include<stdio.h>
#include<math.h>

int main()
{
    int n, m = 0;

    printf("Enter a number :");
    scanf("%d", &n);

    while( n != 0)
    {
        m = m * 10;
        m = m + n%10;
        n = n / 10;
    }
    printf("Reverse of the number = %d\n", m);

return 0;
}
