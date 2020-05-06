#include<stdio.h>
int main()
{
    int n,c=0,d=0,a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n);
        if (n>=10&&n<=20)
            {
                ++c;
              // printf("%d in\n",c);
            }

            else
            {
                ++d;
               // printf("%d out\n",d);
            }
    }
    printf("%d in\n",c);
    printf("%d out\n",d);
}
