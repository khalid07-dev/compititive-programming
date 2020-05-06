#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
       x=(n*i)+2;
       if (x%n==2&&x<10000)
       {

            printf("%d\n",x);
       }
    }
    return 0;

}
