#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void i_series(int n);
void n_series(int n);

int main()
{
    int n;
    char ch;

    printf("Enter any number :");
    scanf("%d", &n);

    fflush(stdin);  /* This defines the "Enter" not as a character*/


    printf("\nThe series type\n'N' for Normal series \n'I' for Inverse series \nPress The Key :");
    scanf("%c", &ch); /* I can use a space before %c or use a fflush(stdin). if I add fflush(stdin) I have to input #include<stdlib.h>*/

    if(ch == 'N' || ch == 'n')
        {
            n_series(n);
        }
    else if(ch == 'I' || ch == 'i')
        {
            i_series(n);
        }
    else
        {
            printf("\nWrong key pressed\n");
        }


return 0;
}
/*---------UDF starts--------*/
void n_series(int n)
{
    int i, j , result = 0;
    printf("\nThe normal series is :\n");

    for(i = 1; i<= n; i++){
        printf(" %d ",i );

        if( i < n ){
            printf(" + ");
            continue;
        }

    }
    for(j = 1; j<= n; j ++){
        result += j;
    }
    printf("= %d",result);

}

void i_series(int n)
{
    int i , j;
    float x , result = 0.0;

    printf("\nThe inverse series is :\n");

    for(i = 1; i<= n; i ++){
            x = 1.0/i;  /*Inverses the character I should make one of the as a float in order to do that I need to add .0*/
            printf(" %f ",x);

            if(i<n){
                printf(" + ");
                continue;
            }
    }
        for(j = 1; j<= n; j ++){
        result +=  1.0/j;
    }
    printf("= %f",result);

}
