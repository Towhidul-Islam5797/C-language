#include<stdio.h>
#include<string.h>

int main()
{
    int i , uppercase_count = 0;
    int lowercase_count = 0;
    char ch[100];

    printf("Enter a sentence (100 letters maximum) : ");
    gets(ch);

    for( i = 0 ; ch[i] != 0 ; i++)
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        {
            uppercase_count++;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z')
        {
            lowercase_count++;
        }

    }
    printf("Number of total uppercase letter  : %d\n" ,uppercase_count );
    printf("Number of total lowercase letter  : %d\n" ,lowercase_count );
return 0;
}
