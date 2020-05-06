#include<stdio.h>
int main()
{
    int k,sum=0,c[2][2];
    int i,j;
    int tda[2][2]= {5,4,4,4};
    int ttdda[2][2]= {6,7,4,8};
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",tda[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",ttdda[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;

            for(k=0; k<2; k++)
            {
                sum=sum+tda[i][k]*ttdda[k][j];
                c[i][j]=sum;


            }
            printf("%d ",c[i][j]);

        }
        printf("\n");


    }

    return 0;
}

