#include<stdio.h>
int main()
{
    int i,x,y,t,j,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
            if(x>y){
                int temp;
                temp=y;
                  y=x;
                 x=temp;
             }
            for(j=x+1;j<y;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }

              printf("%d\n",sum);
                 sum=0;
    }

    return 0;
}
