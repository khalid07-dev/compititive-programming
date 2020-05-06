#include<stdio.h>
int main()
{
    int i,a,b,n,sum=0;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        n=a-1;

        for(i=n;i>b;i--)
        {
            if(i%2!=0)
            {
                sum=sum+i;

            }
        }
    }
    else
    {
        n=a;
        for(i=n+1;i<b;i++)
        {
             if(i%2!=0)
            {
                sum=sum+i;
            }

        }
    }

    printf("%d\n",sum);
    return 0;


}

