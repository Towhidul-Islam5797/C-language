#include<stdio.h>
#include<string.h>

int main()
{
    int i , spch = 0;
    char ch[100];

    printf("Enter a sentence (100 letters maximum) : ");
    gets(ch);

    for( i = 0 ; ch[i] != 0 ; i++)
    {
            if( (ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
            {
                spch = 0;
            }
            else if(ch[i]>='0' && ch[i]<='9')
            {
                spch = 0;
            }
            else
            {
                spch++;
            }

    }
    printf("Number of total Special Character  : %d\n" , spch );
return 0 ;
}
