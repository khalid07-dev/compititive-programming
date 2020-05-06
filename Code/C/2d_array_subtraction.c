#include<stdio.h>
int main()
{
    int i,j;
   int tda[3][3]={8,4,-1,0,1,3,5,4,8};
   int ttdda[3][3]={-4,6,2,1,3,7,5,4,1};
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d ",tda[i][j]);
       }
       printf("\n");
   }
   printf("\n\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d ",ttdda[i][j]);
       }
       printf("\n");
   }
   printf("\n\n");

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d ",ttdda[i][j]-tda[i][j]);
       }
       printf("\n");
   }

    return 0;
}

