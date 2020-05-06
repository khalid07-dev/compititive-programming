#include<stdio.h>
int main()
{
    int x,y;
    for(;;){
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            printf("Decrescente\n");
        }
        else if(y>x){
            printf("Crescente\n");
        }
        else if (x==y)
        {
            break ;
        }
    }
    return 0;
}
