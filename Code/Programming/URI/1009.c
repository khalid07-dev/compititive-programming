#include<stdio.h>
int main()
{
      char a[10];
     float x,y,total;
     while (scanf("%s %f %f",&a ,&x ,&y)!=EOF){
     total=(x+((y*15)/100));
     printf("TOTAL = R$ %0.2f\n",total);
     }
     return 0;

}
