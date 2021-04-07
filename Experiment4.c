#include <stdio.h>
//void pyramid(int n);
/*int main()
{
    int n ;
    printf("Enter the value of N:");
    scanf("%d",&n);

    void pyramid(int n);

}*/
//void pyramid(int n)
void main() //n(7) is the count of “*” in final row
{
    int i, j ,n;
    printf("Enter the value of N:");
    scanf("%d",&n);

    for(i = 1 ; i <= n; i += 2)   //Loop from one row to another row
        {
            for(j = 1 ; j <= i ; j++) //Loop inside each row
                {
                    printf("*");
                }
            printf("\n");
        }

}
