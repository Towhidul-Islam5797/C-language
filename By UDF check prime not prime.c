#include<stdio.h>

int chk_prime(int x); //declaring a UDF for checking prime non-prime

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d" , &a);

    int z = chk_prime(a);

    if(z == 0)
        {
        printf("\n%d is not a prime  number", a);
    }
    else{
        printf("\n%d is a prime number", a);
    }

return 0;
}
int chk_prime(int x)
{
    int i, m;

    if(x == 0)
    {
        m = 0;
        return m;
    }
    if(x == 1)
    {
        m = 0;
        return m;
    }
    if(x == 2)
    {
        m = 1;
        return m;
    }
    if(x %2 == 0)
    {
        m = 0;
        return m;
    }
    else
        {
        for(i = 3 ; i <= x/2 ; i += 2)
        {
                if(x%i == 0)
                {
                    m = 0;
                    break;
                }
        }
    }
return m;
}
