#include <stdio.h>
#include <stdlib.h>
struct po
{
    int x;
    int y;
};

int main()
{
    struct po p;
    printf("Enter x : ");
    scanf("%d",&p.x);

    printf("Enter y : ");
    scanf("%d",&p.y);

    printf("x = %d",p.x);
    printf("\ny = %d",p.y);
    return 0;
}
