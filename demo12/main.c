#include <stdio.h>
#include <stdlib.h>
int fac(int num);

int main()
{
    int num;
    printf("Enter num\n");
    scanf("%d",&num);
    int y=fac(num);
    printf("%d",y);
    return 0;
}
int fac(int num)
{
  int i;
  int fac=1;
  for (i=1;i<=num;i++)
  {
      fac*=i;
  }
 return fac;

}
