#include<stdio.h>
int main()
{
    int n,a=0,g=0,d=0;
    for(;;){
    scanf("%d",&n);
        if(n==4)
        {
            break;
        }
        if(n==1)
        {
            a++;
        }
        if(n==2)
        {
            g++;
        }
        if(n==3)
        {
            d++;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
}
