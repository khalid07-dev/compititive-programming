#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

        int a,c,b;
        b=(T/60)/60;//hour
        a=((T/60)-(b*60));//minute
        c=(T-((b*60*60)+(a*60)));//second
       printf("%d:%d:%d",b,a,c);

        return 0;
}

