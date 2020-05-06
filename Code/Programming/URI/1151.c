#include<stdio.h>
int main()
{
    int a,count=0,first=0,second=1,fibo=0;
    scanf("%d",&a);
    while(count<a)
    {
        if (count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo = first+second;
            first=second;
            second=fibo;
        }
        if (count==a-1){
              printf("%d",fibo);
        }
        else{
        printf("%d ",fibo);
        }

        count++;

    }
    printf("\n");
    return 0;

}
