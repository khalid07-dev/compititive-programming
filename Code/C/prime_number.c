#include<stdio.h>
int main()
{
    int num,count=0,i;
    scanf("%d",&num);
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if (count==0)
        printf("The number is prime");
    else
        printf("The number is not  prime");

    return 0;
}
