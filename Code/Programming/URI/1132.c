#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        for(i=b;i<=a;i++)
        {
            if(i%13!=0)
            {
                sum=sum+i;
            }

    }
    }
    else
    {
        for(i=a;i<=b;i++)
        {
            if(i%13!=0)
            {
                sum=sum+i;
            }

        }
    }
    printf("%d\n",sum);

    return 0;
}
