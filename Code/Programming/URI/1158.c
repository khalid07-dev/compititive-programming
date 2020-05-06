#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d",&t);
    int i=1;

    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        int i=1;
        int sum=0;
        while(i<=b)
        {
            if (a%2!=0)
            {
                sum=sum+a;
                i++;
            }
            a++;
            //printf("%d %d %d %d\n",i,a,b,sum);
        }
        printf("%d\n",sum);
    }
 return 0;
}
