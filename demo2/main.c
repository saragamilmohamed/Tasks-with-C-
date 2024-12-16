#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  /* /// Task 1
    int degree;
    printf("Enter Degree: \n");
    scanf("%d", &degree);

    if (degree >= 85)
        printf("Grade of degree %d is excellent\n", degree);
    else if (degree >= 75 && degree < 85)
        printf("Grade of degree %d is very good\n", degree);
    else if (degree >= 65 && degree < 75)
        printf("Grade of degree %d is good\n", degree);
    else
        printf("Grade of degree %d is fail\n", degree);
*/

    //Task2******************************************************************************

  /*  char op;
    printf("Enter Character\n");
    scanf("%c",&op);
    int num1,num2;
    printf("Enter num1\n");
    scanf("%d",&num1);
    printf("Enter num2\n");
    scanf("%d",&num2);
    switch(op){
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
    default:
        printf("invalid operator\n");

    }*/

  //task3 ********************************************************************************

    int month;
    printf("Enter Month (1-12):\n");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("No. of days in month %d = 31\n", month);
    else if (month == 2)
        printf("No. of days in month %d = 28\n", month);
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("No. of days in month %d = 30\n", month);
    else
        printf("Enter a valid month\n");


 /* //Task 4

   int sum=0;
   int num;
   for (int i=0;i<5;i++)
   {

       printf("enter num%d\n",i+1);
       scanf("%d",&num);
       sum+=num;
   }
   printf("sum = %d",sum);*/

   //Task 5?????????????????????????*********************************************8


/*
   char ch;
   do{

   system("cls");
   printf("new\ndisplay\nexit\n");

   printf("Enter character\n");
   scanf("%c",&ch);
   _flushall();
   switch (ch){
   case 'n':
       printf("you selected new item");
       break;
   case 'd':
       printf("you display item");
       break;
   case 'e':
       printf("you selected exit");
   }

   //sleep(100);
   }while(ch !='e');
*/


 /*  //Task 6***********************************************************
   int num;
   printf("enter num\n");
   scanf("%d",&num);
   int fac=1;
   for(int i=1;i<=num;i++)
   {
       fac*=i;
   }
   printf("factorial of %d = %d",num,fac);*/


 /*//Task 7********************************************************
   int num ;
   printf("Enter Number \n");
   scanf("%d",&num);
   int counter=0;
   if(num<2){
    printf("num %d is not prime");
   }
   for(int i=2;i<num;i++)
   {
       if (num%i==0)
       {
           printf("num %d is not prime\n",num);
           break;
       }
     counter++;
   }
   if (counter==(num-2))
     printf("num %d is prime",num);*/

/*//Task 8*************************************************************
   int num;
   printf("Enter num \n");
   scanf("%d",&num);
   int temp=0;
  while (num!=0){
    temp=num%10;

    printf("%d",temp);
    num=num/10;
  }
*/



    return 0;
}
