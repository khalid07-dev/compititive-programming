#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    b=7;
    while(a<=9)
    {
        int i;
        for (i=0;i<3;i++)
        {

            printf("I=%d J=%d\n",a,b);
              b--;
        }
        a=a+2;
        b=7;
    }
    return 0;
}
