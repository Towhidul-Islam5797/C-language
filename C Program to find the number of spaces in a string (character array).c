#include<stdio.h>
void main()
{
    char s[100];//assume that user won't enter a string of size > 100
    int i , numSpace=0;//counter to count #of spaces

    printf("Enter a sentence :");
    gets(s); //read string from user

    for(i = 0 ; s[i] != '\0' ; i++)
    {
        if( s[i] == ' ')
        {
            numSpace++;
        }
    }
    printf("%d spaces in the sentence\n", numSpace);
}
