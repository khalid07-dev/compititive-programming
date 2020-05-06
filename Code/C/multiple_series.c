#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=1,b=2;
    printf("Enter n1 and n2 :",n1,n2);
    scanf("%d %d",&n1,&n2);
    printf("1.2+2.3+3.4+...........+n1.n2",n1,n2);
    while(a<=n1&&b<=b)
    {
        sum = sum + a*b;
        a=a+1;
        b=b+1;
    }

printf("\nsum of series = %d",sum);

    return 0;
}

