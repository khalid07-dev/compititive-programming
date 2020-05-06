#include<stdio.h>
int main()
{
    int a,b,i;
    float c,v=0;
    for (i=0;i<2;i++)
    {

    scanf("%d%d%f",&a,&b,&c);
    v=v+(b*c);
    }
    printf("VALOR A PAGAR: R$ %0.2f\n",v);
    return 0;


}
