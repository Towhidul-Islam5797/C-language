#include<stdio.h>
#include<math.h>

int chk_prime(int x); //declaring a UDF for checking prime non-prime

int main()
{
    int a, z;
    printf("Enter a number :");
    scanf("%d" , &a);

    z = chk_prime(a);

return 0;
}
int chk_prime(int x)
{
      int i, m;
      for(i = 2; i <= x/2; i ++){

        if(x%i == 0){
            m = 0;
            break;
        }
    }
    if(m == 0){
         printf("\n%d is a composit number", x);
    }
    else{
         printf("\n%d is a prime number", x);
    }
return x;
}
