#include<stdio.h>
int main()
{
    float a=1,b=1,S=0;
    while (a<=39)
    {
        S=S+(a/b);

       // printf("%f  %f  %f\n",a,b,S);

         a=a+2;
         b=b*2;
    }
    printf("S = %0.2f\n",S);
    return 0;

}

