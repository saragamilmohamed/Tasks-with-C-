#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("_______________________\n");
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    printf("Ascii of %c = %d\n",ch,ch);
    printf("-----------------------------------\n");
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("Ascii of %d = %c\n",num,num);
    printf("-------------------------------------------\n");
    int number;
    scanf("%d",&number);
    printf("Hexadecimal of %d = %x\n",number,number);
    printf("----------------------------------------------\n");
    int num1;
    int num2;
    printf("Enter num1 : \n");
    scanf("%d",&num1);
    printf("Enter num2 : \n");
    scanf("%d",&num2);
    printf("Summation %d + %d = %d\n",num1,num2,num1+num2);
    printf("Substraction %d - %d = %d\n",num1,num2,num1-num2);
    printf("Multipliction %d * %d = %d\n",num1,num2,num1*num2);




    return 0;
}
