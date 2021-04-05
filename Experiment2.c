#include <stdio.h>
float add_val(); //Same as: float add_val(int p, int q);
float sub_val(); //Same as: float sub_val(int, int);
float mul_val();
float div_val();
float result; // result is a global variable

int main ()
{
    int x,y; // x, y are local variables, in main()
    float z;
    char a;

    printf("Enter the operation mode: \n");
    printf("Addition: A, Subtraction: S, Multiplication: M, Division: D \n");
    scanf("%c", &a); // a = ‘A’ or ‘S’ or ‘M’ or ‘D’
    printf("Enter the value1 and value2: \n");
    scanf("%d %d", &x, &y); // x =3 , y=4

    if(a=='A'||a=='a')
        {
            z= add_val(x,y);
            printf("The result is %f\n",z);
        }
    else if(a=='S'||a=='s')
        {
            z= sub_val(x,y);
            printf("The result is %f\n",z);
        }
    else if(a=='M'||a=='m')
        {
            z= mul_val(x,y);
            printf("The result is %f\n",z);
        }
    else if(a=='D'||a=='d')
        {
            z= div_val(x,y);
            printf("The result is %f\n",z);
        }
    else
    printf("The operation or variable invalid\n");

return 0;
}

float add_val(int p, int q)  // p = x= 3 , q = y = 4
{
    result = p+q;

return result;
}

float sub_val(int p, int q)
{
    result = p-q;

return result;
}

float mul_val(int p, int q)
{
    result = p*q;

return result;
}

float div_val(int p, int q)
{
    result = (float) p/q; //type casting ¾ = 0.75

return result;
}
