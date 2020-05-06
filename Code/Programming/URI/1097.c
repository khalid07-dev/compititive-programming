#include<stdio.h>
int main()
{
    int a,b,y;
    a=1;
    b=7;
    y=1;
    while(a<=9)
    {
        int i;
        for (i=0;i<3;i++)
        {


            printf("I=%d J=%d\n",a,b);
              b--;
        }
        int x=2;

        a=a+2;
        b=7+x*y;
        y++;

    }
    return 0;
}

