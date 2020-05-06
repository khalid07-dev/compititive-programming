#include<stdio.h>
int main()
{
    int  num1,num2,i,n1,n2,gcd,lcm;
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        int rem;
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
        gcd=n2;
        lcm=(num1*num2)/gcd;
        printf("GCD is = %d",gcd);
        printf("LCM is = %d",lcm);
        return 0;
}
