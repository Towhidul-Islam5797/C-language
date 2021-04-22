#include<stdio.h>
int main()
{
    int n, m = 0,i, x = 1;

    printf("Enter a number :");
    scanf("%d", &n);

    while(n != 0){

        m = m + n%10;
        n = n /10;
    }
    for(i = 2; i <= m/2; i ++){

        if(m%i == 0){
            x = 0;
            break;
        }
    }
    if(x == 0){
         printf("\n%d is a compsit number", m);
    }
    else{
         printf("\n%d is a prime number", m);
    }

return 0;
}
