#include<stdio.h>
int main()
{
    long long int a,b,d;
    while (scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a<b)
        {
            d=b-a;
            printf("%lld\n",d);
        }
        else
        {
            long long int temp;
            temp=a;
            a=b;
            b=temp;
            d=b-a;
            printf("%lld\n",d);
        }

    }
    return 0;


}
