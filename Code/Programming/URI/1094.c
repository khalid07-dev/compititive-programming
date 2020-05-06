#include<stdio.h>
int main(){
int a,i,n,c=0,r=0,s=0,sum=0;
char b;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d %c",&a,&b);
    sum=sum+a;
    if(b=='C'){
        c=c+a;
    }
    if(b=='R'){
        r=r+a;
    }
    if(b=='S'){
        s=s+a;
    }
}
printf("Total: %d cobaias\n",sum);
printf("Total de coelhos: %d\n",c);
printf("Total de ratos: %d\n",r);
printf("Total de sapos: %d\n",s);
printf("Percentual de coelhos: %0.2f %%\n",c*100.0/sum);
printf("Percentual de ratos: %0.2f %%\n",r*100.0/sum);
printf("Percentual de sapos: %0.2f %%\n",s*100.0/sum);

return 0;
}
