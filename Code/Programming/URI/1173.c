#include<stdio.h>
int main()
{
    int i,x[10],n;
    scanf("%d",&n);

    for (i=0;i<10;i++)
    {
        x[0]=n;
        printf("N[%d] = %d\n",i,x[n]);
        n=n+n;

    }
}
