#include<stdio.h>
#include<string.h>
int main()
{
    char number[1001]; //taking a string character
    int flag = 0 , i = 0;

    printf("Enter a number: ");
    scanf("%s", &number);


    //till string does not end

    while(number[i++] != '\0')    // same as while(length-->0)
    {
        if(number[i] == '.')    //if decimal point is present
        {
            flag = 1;
            break;
        }
    }

    // if(0) is same as if(false)
    if(flag)
        printf("%s Number is not an Integer Number");
    else
        printf("%s Number is a Integer Number");

return 0;
}
