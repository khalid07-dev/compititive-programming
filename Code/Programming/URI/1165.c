#include<stdio.h>
int main()
{
    int i,n,X,j,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&X);
        for(j=2;j<X;j++){
                if(X%j==0){
                   p++;
                }
        }
        if(p==0){
             printf("%d eh primo\n",X);
             p=0;
        }
        else{
         printf("%d nao eh primo\n",X);
         p=0;
        }
    }
    return 0;
}
