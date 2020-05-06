#include<stdio.h>
int main()
{


    double S=0,i;
    for (i=1;i<=100;i++)
    {
        S=S+(1/i);

    }
    printf("S = %0.2lf\n",S);
    return 0;

}
