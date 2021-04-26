#include<stdio.h>

void Check_Duck(int num);

int main()
{
    int array[10];

    printf("Enter 10 number If the number has a zero: " );

    for(int i=0; i<10; i++)
    {
        scanf("%d", &array[i]);//input number
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        Check_Duck(array[i]); //UDF
    }
return 0;
}
void Check_Duck(int num)
{
    int flag = 0;

    while(num != 0)
    {
        int digit = num % 10 ;
        num  /= 10;

        if(digit == 0)
        {
            flag = 1;
        }
    }
    // if(0) is same as if(false)
    if(flag)
    {
       printf("\n'Yes' the number has a zero in it\n");
    }
    else
    {
        printf("\n'No' there is no  zero in the number\n");
    }
}
