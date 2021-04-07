#include <stdio.h>
void power(int a, int b);
int result = 1;
int main()
{
    int x , y ;

    printf("Enter the initial value : "); // it will get the initial value of the series
    scanf("%d",&x);

    printf("Enter the secondary value : "); // it is max number of the power for initial value
    scanf("%d",&y);

    power(x , y); // the UDF function
    printf("The final value is :%d\n"); // it will bring the result

return 0;
}

void power(int a, int b) // this is the UDF function 
{
    int i;
    for(i= 1 ; i<=b ; i++) // loop for the defining times of running 
        {
            result *=  a; //it actually brings the result of power 
            printf("%d\n",result);
        }
}
