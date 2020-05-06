#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char arr[10];
        for(j=0;j<10;j++)
        {
            scanf("%c",&arr[j]);
        }
         for(j=0;j<arr[10];j++)
        {
            printf("%c",arr[j]);
        }
    }
}
