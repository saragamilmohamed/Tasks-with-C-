#include <stdio.h>
#include <stdlib.h>

struct emp{
    int id;
    char name[10];
    int age;
};

int main()
{
    struct emp e1;
    struct emp *ptr=&e1;
  int i;
    for(i=0;i<3;i++)
    {
      printf("enter ptr id =\n");
      scanf("%d",&(ptr->id));
      printf("enter ptr name=\n");
      scanf("%s",(ptr->name));
      printf("enter ptr age =\n");
      scanf("%d",&(ptr->age));
    }
    for(i=0;i<3;i++)
    {
        printf("\nid =%d",ptr->id);
        printf("\nname =%s",ptr->name);
        printf("\nage =%d",ptr->age);
        printf("\n***********************************");
    }



    return 0;
}
