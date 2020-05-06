#include<stdio.h>
int main()
{
    int i=0;
    float x,sum=0;
    for (;;)
    {

        int a;
        scanf("%d",&a);

        if (a<0)
            break ;
              sum+=a;
                 i++;
    }
    x=sum/i;
    printf("%0.2f\n",x);
}
