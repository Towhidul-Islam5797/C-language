#include<stdio.h>
#include<math.h>

float pi = 3.1416; //global area declaration
//.......UDF Declaration........

float volume();
float area();

int main()
{
    int r;
    float z;
    char ch;

    printf("Enter the Radius (inches) :");
    scanf("%d", &r);

    fflush(stdin);

    printf("Enter the computation mode \nV:Volume \nA:Area\n");
    scanf("%c", &ch);


    if(ch == 'V' || ch == 'v'){
       z = volume(r);
       printf("The Volume of the sphere is : %f", z);
       }
    else if(ch == 'A' || ch == 'a'){
        z = area(r);
        printf("The Area of the sphere is : %f",z);
    }
    else{
        printf("\nWrong key pressed");
    }

return 0;
}
//........UDF starts here......
float volume(int x)
{
    float result;
    result = (4.0/3.0) * pi * pow(x , 3);

return result;
}
float area(int x)
{
    float result;

    result = 4.0 * pi * pow(x ,2) ;

return result;
}

