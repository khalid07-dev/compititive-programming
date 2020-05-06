#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            c=pow(i,j);
            printf("%d ",c);
            printf("(%d%d)",i,j);
        }
        printf("\n");
    }
}
