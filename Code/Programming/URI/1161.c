#include<stdio.h>
int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return (n*fact(n-1));
}
int main()
{
    int m,n,x,y,sum=0;

    while(scanf("%d %d",&m,&n)!=EOF){
    x=fact(m);
    y=fact(n);
    sum=x+y;
    printf("%d\n",sum);
    }

    return 0;

}

