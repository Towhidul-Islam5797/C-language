#include <stdio.h>
void pyramid(int n);
int main()
{
    int n ,m ;
    printf("Enter the value of N:"); //will prompt the user for the number of * for each rows
    scanf("%d",&n);

    pyramid(n); //the UDF function for a pyramid

}
void pyramid(int n)
 //n(7) is the count of “*” in final row
{
    int i, j ;

    for(i = 1 ; i <= n; i += 2)   //Loop from one row to another row
        {
            for(j = 1 ; j <= i ; j++) //Loop inside each row
                {
                    printf("*");
                }
            printf("\n");
        }

}
