#include<stdio.h>
int main(){
    int i,x,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            a=i;
            b=i*i;
            c=i*i*i;
        printf("%d %d %d\n",a,b,c);
        printf("%d %d %d\n",a,b+1,c+1);
    }
    return 0;
}
