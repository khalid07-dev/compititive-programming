#include<stdio.h>
int main()
{
    float x,a,sum=0;
    int i=0;
    for(;;){
        scanf("%f",&x);
        if(x>=0&&x<=10){
        sum=sum+x;
        ++i;
            if(i==2){
            a=sum/2;
            printf("media = %0.2f\n",a);
            int p;
        for(;;){
        scanf("%d",&p);
        if(p==2){
        printf("novo calculo (1-sim 2-nao)\n");
        break;
        }
        else if(p==1){
        printf("novo calculo (1-sim 2-nao)\n");
        continue ;
        }
        else {
       printf("novo calculo (1-sim 2-nao)\n");
        }
         }
          }
        }
        else {
            printf("nota invalida\n");
        }
    }
    return 0;
}

