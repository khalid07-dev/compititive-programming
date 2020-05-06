#include<stdio.h>
int main()
{
    int  t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        float x,y;
        scanf("%f%f",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            float z=(x/y);
            printf("%0.1f\n",z);
        }

    }
    return 0;
}
