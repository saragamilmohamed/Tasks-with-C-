#include <stdio.h>
#include <stdlib.h>
struct emp{
    int id;
    char name[20];
    int age;
};

int main()
{
    int size,i;
    printf("Enter size :\n");
    scanf("%d",&size);
    struct emp* ptr=(struct emp*) malloc(size*sizeof(struct emp));
    if(ptr != NULL){
    for(i=0;i<size;i++){

        printf("\nenter id [%d] :",i);
        scanf("%d",&ptr[i].id);
        printf("\nenter name [%d] :",i);
        scanf("%s",ptr[i].name);
        printf("\nenter age [%d] :",i);
        scanf("%d",&ptr[i].age);}
    for(i=0;i<size;i++)
    {
        printf("\narr[%d] = %d",i,(ptr+i)->id);
        printf("\narr[%d] = %s",i,(ptr+i)->name);
        printf("\narr[%d] = %d",i,(ptr+i)->age);
        printf("\n*********************************");
    }
    free(ptr);
    }
    return 0;
}
