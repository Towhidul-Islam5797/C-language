#include<stdio.h>
#include<math.h>

float times_table(); //UDF Declaration
int main()
{
    int x, y;
    printf("Enter a value :");
    scanf("%d",&x); //prompting user for a integer input

    if( 1<= x &&  x<= 99 ){
         y = times_table(x); // calling the UDF on main function
    }
    else{
        printf("The value is off limit",x);
    }

return 0;
}
float times_table(int a ,int b) //UDF Specificatons
{
    int i;

    for(i = 1 ; i <= 20 ; i++){
            b = a * i;
        printf("%d * %d = %d\n",a , i ,b);
    }
return b;
}
