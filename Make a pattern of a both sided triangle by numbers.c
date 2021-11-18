#include<stdio.h>
int main()
{
    int n  , i , space , col;

    printf("Enter the number of Rows : "); //prompting user for a number he desires
    scanf("%d", &n);

    for(i = 0 ; i <= n ; i++) //parent loop (run loop) till the number of rows
    {
        for(col = 1 ; col <= n-i && col < n ; col++ )
        {
            printf(" %d " , col);
        }
        if(i == 0)
        {
            printf(" %d " , col);
        }
        else
        {
            for(space = 1 ; space < (6*i) - 2 ; space ++)
            {
                if( i == 0)
                {
                    continue; //i == 0 ; then space is not needed
                }
                printf(" ");
            }
        }

        for(col = n-i ; col >= 1 ; col--)
        {
            if(col == n) // if col = n ; number is not needed to print
            {
                continue;
            }
            printf(" %d ", col);
        }
        printf("\n");
    }
/* making pattern like this
 1  2  3  4  3  2  1 
 1  2  3     3  2  1 
 1  2           2  1 
 1                 1 
 */
}
