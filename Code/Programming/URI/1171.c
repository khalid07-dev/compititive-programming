#include<stdio.h>
int main ()
{
    int m,n,temp,i,sum=0;
    scanf("%d%d",&m,&n);
    if (n<m)
    {
        for(i=m; i>n; i--)
        {
            if (i%2!=0)
            {
                sum+=i;
            }


        }

        printf("%d\n",sum);
    }
    else
    {
        for(i=m; i<n; i++)
        {
            if (i%2!=0)
            {
                sum+=i;
            }

            printf("%d\n",sum);
        }
    }

    return 0;

}

