#include<stdio.h>
int f91(int a)
{
    if(a<=100)
        return f91(f91(a + 11));
    else
        return a-10;
}
int main()
{
    for(;;)
    {
    int N,x;
    scanf("%d",&N);
    if(N!=0){
    x=f91(N);
    printf("f91(%d) = %d\n",N,x);
    }
    else
    {
        break;
    }
    }
    return 0;
}
