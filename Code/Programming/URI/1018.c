#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

        int a,c,b,d,e,f,g;
        a=T/100;
        b=(T-(100*a))/50;//T-T/b
        c=(T-(50*(T/50)))/20;
        d=(T-(10*(T/10)))/10;
        e=(T-(10*(T/10)))/5;
        f=(T-(5*(T/5)))/2;
        g=1;

        printf("%d nota(s) de R$ 100,00\n",a);
        printf("%d nota(s) de R$ 50,00\n",b);
        printf("%d nota(s) de R$ 20,00\n",c);
        printf("%d nota(s) de R$ 10,00\n",d);
        printf("%d nota(s) de R$ 10,00\n",e);
        printf("%d nota(s) de R$ 10,00\n",f);
        printf("%d nota(s) de R$ 10,00\n",g);


        return 0;


}
