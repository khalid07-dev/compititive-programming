
#include<stdio.h>
int main()
{
    double a,sum=0,avg;
    int i,c=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            sum=sum+a;
            c++;
        }
    }
    printf("%d valores positivos\n",c);
    avg=sum/c;
    printf("%0.1lf\n",avg);
    return 0;
}
