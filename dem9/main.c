#include <stdio.h>
#include <stdlib.h>
struct emp
{
  int id;
  char name[20];
  int age;
};

int main()
{
    struct emp x;
    printf("\n enter id x :");
    scanf("%d",&(x.id));
    printf("\n enter name x :");
    scanf("%s",&(x.name));
    printf("\n enter age x :");
    scanf("%d",&(x.age));
    printf("\n id of x =%d  , name of x = %s ,age of x = %d ",x.id,x.name,x.age);

    printf("\n***************************************************************");

    struct emp y;
    printf("\n enter id x :");
    scanf("%d",&(y.id));
    printf("\n enter name x :");
    scanf("%s",&(y.name));
    printf("\n enter age x :");
    scanf("%d",&(y.age));
    printf("\n id of y =%d  , name of y = %s ,age of y = %d ",y.id,y.name,y.age);

    return 0;
}
