#include<stdio.h>
int main()
{
        int a;
        int b=5;
        scanf("%d",&a);
        int i=1;
        int sum=0;
        while(i<=b)
        {
            if (a%2==0)

            {
                sum=sum+a;
                i++;
            }
              if (a==0)
            break ;
            a++;
            printf("%d %d %d %d\n",i,a,b,sum);
        }
        printf("%d\n",sum);

 return 0;
}

