#include<stdio.h>
int main()
{
    int i,a,c=0,d=0,e=0,f=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a>0)
        {
            c++;
        }
         if(a<0)
        {
            d++;
        }
        if(a%2==0)
        {
            e++;
        }
        if(a%2!=0)
        {
            f++;
        }
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",f);
    printf("%d valor(es) positivo(s)\n",c);
    printf("%d valor(es) negativo(s)\n",d);

    return 0;

}
