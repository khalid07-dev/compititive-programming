#include<stdio.h>
int main()
{
    int x,y,c=0,i,Total=0;
   while(scanf("%d%d",&x,&y)!=EOF){
       if(x>=y ){
        for(i=x;i<24;i++){
            c++;
        Total=c+y;
       }
       }
       else{
        Total=y-x;
       }
        printf("O JOGO DUROU %d HORA(S)\n",Total);
        c=0;

}
    return 0;

}
