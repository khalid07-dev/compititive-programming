#include<stdio.h>
int main()
{
   int a,i=0;
   scanf("%d",&a);
   while(a!=0)
   {
       a=a/10;
       ++i;
   }
   printf("total digit is = %d",i);
}
