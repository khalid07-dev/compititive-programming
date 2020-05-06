#include<stdio.h>
int main(){
    double x,a,sum=0;
    int p=0;
    for(;;){
        scanf("%lf",&x);
    if(x==2){
        break;
    }
    else if(x==1){
        printf("novo calculo (1-sim 2-nao)\n");
        p=0;sum=0;
        continue ;
    }
    else if(x>=0&&x<=10){
        sum=sum+x;
        ++p;
        if(p==2){
        a=sum/2;
        printf("media = %0.2lf\n",a);
        printf("novo calculo (1-sim 2-nao)\n");
        sum=0;p=0;
        }
    }
    else{
        printf("nota invalida\n");
    }
}
return 0;
}
