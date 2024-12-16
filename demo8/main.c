#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num ;
   printf("Enter Number \n");
   scanf("%d",&num);
   while(num>=2)
   {

   int counter=0;
   if(num<2){
    printf("num %d is not prime");
   }
   for(int i=2;i<num;i++)
   {
       if (num%i==0)
       {

           break;
       }
     counter++;
   }
   if (counter==(num-2))
     printf("%d ",num);

    num--;
   }
}
