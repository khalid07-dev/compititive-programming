#include<stdio.h>
int main()
{
    float x,b,c;
    int a;
    while (scanf("%f",&x)!=EOF)
    {
        if(x>=0&&x<=400.00)
        {
            a=15;
            b=((x*a)/100);
            c=x+b;
            printf("Novo salario: %0.2f\n",c);
            printf("Reajuste ganho: %0.2f\n",b);
            printf("Em percentual: %d %%\n",a);
        }
        else if(x>=400.01&&x<=800.00)
        {
            a=12;
            b=((x*a)/100);
            c=x+b;
            printf("Novo salario: %0.2f\n",c);
            printf("Reajuste ganho: %0.2f\n",b);
            printf("Em percentual: %d %%\n",a);
        }
        else if(x>=800.01&&x<=1200.00)
        {
            a=10;
            b=((x*a)/100);
            c=x+b;
            printf("Novo salario: %0.2f\n",c);
            printf("Reajuste ganho: %0.2f\n",b);
            printf("Em percentual: %d %%\n",a);
        }
        else if(x>=1200.01&&x<=2000.00)
        {
            a=7;
            b=((x*a)/100);
            c=x+b;
            printf("Novo salario: %0.2f\n",c);
            printf("Reajuste ganho: %0.2f\n",b);
            printf("Em percentual: %d %%\n",a);
        }
        else if (x > 2000.00)
        {
            a=4;
            b=((x*a)/100);
            c=x+b;
            printf("Novo salario: %0.2f\n",c);
            printf("Reajuste ganho: %0.2f\n",b);
            printf("Em percentual: %d %%\n",a);
        }

    }
    return 0;
}
