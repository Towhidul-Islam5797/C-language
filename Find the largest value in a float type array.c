#include <stdio.h>
void main()
{
    int i,n;

    printf("No. of elements: ");
    scanf("%d",&n);

    float arr[n], max;
    printf("Enter %d numbers: ",n);

    for(i=0; i < n; ++i) // fill up array by user inputs
    {
        scanf("%f",&arr[i]);
    }

    max = arr[0]; //initially assume arr[0] is the max

    for(i=1; i<n; ++i)
    {
        if(max < arr[i]) //update max if arr[i] > current value of max
        max=arr[i];
    }
    printf("maximum= %.2f",max);
}
