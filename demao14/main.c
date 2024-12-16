#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter a =\n");
    scanf("%d",&a);
    printf("Ente b =\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a = %d ,b  = %d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;


}
/*int main()
{
    int x=3,y=5,temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d,,y=%d",x,y);

}*/
