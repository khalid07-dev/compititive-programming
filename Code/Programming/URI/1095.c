#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    b=60;
    while(b>=0)
    {
        printf("I=%d J=%d\n",a,b);
        a=a+3;
        b=b-5;
    }

    return 0;

}
