#include<stdio.h>
int main()
{
    double a;
    int i,c=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            c++;
        }
    }
    printf("%d valores positivos",c);
    return 0;
}
