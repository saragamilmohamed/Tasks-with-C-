#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 4

int main()
{
    int arr[row][col];
    int i,j;
    int sum[row]={0};
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("please enter arr[%d][%d]=",i,j,"\n");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

         sum[i]+=arr[i][j];
        }

    }
    for(i=0;i<row;i++)
    {
        printf("sum of row[%d] = %d\n",i,sum[i]);

    }
    return 0;
}
