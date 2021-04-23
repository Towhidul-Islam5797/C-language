#include <stdio.h>
int main()
{


    int num;
    printf("Enter any number: "); // input
    scanf("%d", &num);

    if(num >= 0){
        printf("The number is positive");

        if(num%2 == 0){  //if the number is positive then it will run the next loop of odd even
            printf("\nNumber is Even");
            }
        else if(num%2 != 0){
            printf("\nNumber is Odd");
            }
    }
    else{
        printf("The number is negative");
       }
    if (num == 0){
        printf("The number is zero");
    }

return 0;
}

