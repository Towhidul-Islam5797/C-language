#include <stdio.h>
void power(int a, int b);
int result = 1;
int main()
{
    int x = 2 , y = 8, z;
    power(x , y);
    printf("The final value is :%d\n", result);

return 0;
}

void power(int a, int b)
{
    int i;
    for(i= 1 ; i<=b ; i++)
        {
            result *=  a;
            printf("%d\n",result);
        }
}
