#include<stdio.h>
int main()
{
    int t,d;
    scanf("%d",&t);
    for(d=0; d<t; d++)
    {
        int a,fibo=0;
        scanf("%d",&a);
        if (a==0)
        {
            fibo=a;
        }
        else if (a==1 || a==2)
        {
            fibo=1;
        }
        else
        {
            fibo = (a-1)+(a-2);

        }
        printf("Fib(%d) = %d\n",a,fibo);

    }
    return 0;
}





