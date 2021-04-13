#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float num1 , num2 , num3 ;
    char op;


    printf("For addation press '1' \nFor substration press '2' \nFor multiplication press '3' \nFor division press '4' \n");
    printf("\nFor using x^ press '5' \nFor root press '6' \nFor using nPr press '7' \nFor using ");


    printf("\nEnter a number :");
    scanf("%f", &num1 );


    fflush(stdin);


    printf("Enter a operator :");
    scanf("%c", &op );


    printf("Enter a number :");
    scanf("%f", &num2 );



    if(op == '1'){

            num3 = num1 + num2;

        }
        else if(op == '2'){

            num3 = num1 - num2;

        }
        else if(op == '3'){

                num3 = num1 * num2;

        }
        else if(op == '4'){

            num3 = num1 / num2;

        }
        else if(op == '5'){

            num3 = pow(num1,num2);

        }
        else if(op == '6'){

            num3 = pow(num1 , 1/num2);

        }
        else if(op == '7'){

            int i;
            num3 =1;
                for(i = num1 - num2 + 1; i<=num1; i++)

                    num3 *= i;

        }
        printf("Result :%f", num3);
}
