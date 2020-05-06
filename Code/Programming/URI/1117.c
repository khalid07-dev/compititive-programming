#include<stdio.h>
int main()
{
    float x,a,sum=0;
    int i=0;
    for(;;)
    {
        scanf("%f",&x);
        if(x>=0&&x<=10)
        {
            sum=sum+x;
            ++i;
            if(i==2)
            {
                a=sum/2;
                printf("media = %0.2f\n",a);
                break ;
            }
        }
        else {
            printf("nota invalida\n");
        }
    }
    return 0;
}
