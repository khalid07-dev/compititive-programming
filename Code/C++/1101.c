#include<stdio.h>
int main()
{
    int m,n,sum=0,i,j;

    for(;;)
    {
        scanf("%d%d",&m,&n);
        if(m<=0||n<=0)
            break ;

    if(m>n)
    {
        int temp;
        temp=m;
        m=n;
        n=temp;
        for(i=m; i<=n; i++)
        {
            sum=sum+i;
            printf("%d ",i);
        }
    }
    else
    {
        for(i=m; i<=n; i++)
        {
            sum=sum+i;
            printf("%d ",i);
        }

    }
    printf("Sum=%d\n",sum);
    sum=0;


    }
}
