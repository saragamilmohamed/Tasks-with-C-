#include <stdio.h>
#include <stdlib.h>

struct emp{
    int id;
    char name[10];
    int age;
};

int main()
{
    struct emp e1[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter  e1[%d]",i);
        printf("\nenter e1.id =");
        scanf("%d",&e1[i].id);
        printf("\nenter e1.name=");
        scanf("%s",e1[i].name);
        printf("\n enter e1.age =");
        scanf("%d",&e1[i].age);
    }
    for(i=0;i<3;i++)
    {
        printf("\ne1[%d].id=%d",i,e1[i].id);
        printf("\ne1[%d].id=%s",i,e1[i].name);
        printf("\ne1[%d].id=%d",i,e1[i].age);
        printf("\n****************************************************");
    }
    return 0;
}
