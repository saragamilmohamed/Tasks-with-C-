#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n enter arr[%d]=",i+1);
        scanf("%d",arr+i);
    }
    for(i=0;i<5;i++)
    {
        printf("\n arr[%d]=%d ",i+1,*(arr+i));
    }
    return 0;
}
