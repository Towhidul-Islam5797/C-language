#include<stdio.h>
#include<math.h>

int main()
{
    float a , b , c , d;

    printf("Enter the Base of an right triangle:");
    scanf("%f",&b);

    printf("Enter the height of an right triangle:");
    scanf("%f",&c);

    d = pow(b ,2) + pow(c , 2);
    a = sqrt( d);

    printf("The hipotenuse of an right triangle %f", a);
    }
