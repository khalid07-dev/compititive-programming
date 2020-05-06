#include<stdio.h>
int main()
{
    int n,p,i,max=0;
    for(i=1;i<=100;i++)
    {
        int a;
        scanf("%d",&n);
        for(a=0;a<100;a++)
        {
            int temp;
            if(n>max)
            {
                temp=n;
                n=max;
                max=temp;
                p=i;

            }

        }
    }
    printf("%d\n",max);
    printf("%d\n",p);
    return 0;
}
