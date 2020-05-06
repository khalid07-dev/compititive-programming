
#include<stdio.h>
int main()
{
    int n,i;
    int t,a;
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
            scanf("%d",&n);
            int sum=0;
            for(i=1;i<n;i++)
            {
                if(n%i==0)
                    sum=sum+i;
            }
             //printf("%d\n",sum);
             if (sum==n)
                printf("%d eh perfeito\n",n);
             else
                   printf("%d nao eh perfeito\n",n);
    }

    return 0;

}

