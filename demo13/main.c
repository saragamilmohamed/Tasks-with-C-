#include <stdio.h>
#include <stdlib.h>
int getmax(int x,int y);
int main()
{
    int a,b;
  printf("enter a and b\n");
    scanf("%d %d",&a,&b);
   int z= getmax(a,b);
   printf("%d",z);
   return 0;
}
int getmax(int x,int y)
{
    return x>y?x:y;
}
