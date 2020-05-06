#include<stdio.h>
int main()
{
    double arr[2],max=0,A,B,C;
    int i,j;

    if(A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if((A*A)==(B*B)+(C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((A*A)>((B*B)+(C*C)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((A*A)<(B*B)+(C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(A==B||B==C||C==A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}

