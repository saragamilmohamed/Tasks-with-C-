#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int arr[size];
    int i;
    int sum=0;

    for(i=0;i<size;i++)
    {
        printf("enter arr[%d]= ",i,"\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("sum of arr = %d  \n",sum);


    int max=arr[0];
    int min=arr[0];

    for(i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Max of arr = %d \n",max);


    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Min of arr = %d \n",min);

    return 0;
}

