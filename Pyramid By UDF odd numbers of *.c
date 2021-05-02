#include <stdio.h>
int pyramid(int n);
int main()
{
    int n ,y;
    printf("Enter the value of N:");
    scanf("%d",&n);

     y = pyramid(n);

}
int pyramid(int n)  //n(7) is the count of “*” in final row
{
    int i, j ;

    for(i = 1 ; i <= n; i += 2)   //Loop from one row to another row
        {
            for(j=1; j<=(n-i)/2; j++)
                {
            printf(" ");
                }
            for(j = 1 ; j <= i ; j++) //Loop inside each row
                {
                    printf("*");
                }
            printf("\n");
        }

}
