#include <stdio.h>
#include<math.h>

int main()
{
    int n , i ;
    float arr[100], sum = 0.0, avg;

    printf("Enter the numbers of elements (size should be less than 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("Average = %.4f", avg);


    for(i = 0 ; i <n ; i++)
    {
        if(avg < arr[i])
        {
            printf("\nInputs greater than the average : %.0f\t" , arr[i]);
        }
    }

return 0;
}
