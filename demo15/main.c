#include <stdio.h>
#include <stdlib.h>
void scan_array(int arr[],int n);
void print_array(int arr[],int n);
int sum_array(int arr[],int n);
int main()
{
    int arr[4];
    scan_array(arr,4);
    print_array(arr,4);
    int s=sum_array(arr,4);
    printf("sum array= %d",s);
    return 0;
}
void scan_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void print_array(int arr[],int n)
{
   int i;
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
int sum_array(int arr[],int n)
{
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
