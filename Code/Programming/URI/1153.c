#include<stdio.h>
int main()
{
    int x,a ;
    scanf("%d",&a);
    x=fact(a);
    printf("%d",x);

}
int fact(int n)
{

    if(n<=1)
        return 1;
    else
        return (n*fact(n-1));
}
