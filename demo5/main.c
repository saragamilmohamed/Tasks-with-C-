#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[10];
    char lname[10];
    printf("Enter First Name : ");

    scanf("%s",fname);
    printf("Enter Last Name : ");
    scanf("%s",lname);
    char full_name[20];

    strcpy(full_name,fname);
    strcat(full_name," ");
    strcat(full_name,lname);
    printf("full name : %s",full_name);
    return 0;
}
