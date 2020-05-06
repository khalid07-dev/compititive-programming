#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=1; i<=b; i++)
    {
        if(i%a==0)
        {
            printf("%d\n",i);
        }
        else{
           printf("%d ",i);
        }
    }
    return 0;
}

