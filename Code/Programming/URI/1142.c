#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    i=1;
    int f=1;
    while(i<=n)
    {
        for(j=1;j<=4;j++)
        {

            if(f%4==0){
                printf("PUM\n");
                f++;
            }

            else {
                printf("%d ",f);
                ++f;
                }
        }
        i++;
    }
}
