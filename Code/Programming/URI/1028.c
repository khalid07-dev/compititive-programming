#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int t,i,x,m,n;
    scanf("%d",&t);
    for(i=0; i<t; i++){
    scanf("%d%d",&m,&n);
    if(n>m)
    {
        int temp;
        temp=m;
        m=n;
        n=temp;
    }
    x=gcd(m,n);
    printf("%d\n",x);
    }
    return 0;
}


