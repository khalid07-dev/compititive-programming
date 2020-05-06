#include<stdio.h>
int main()
{

    double a,c;
    int d,b;
    scanf("%lf",&a);
    d=a;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",d/100);
    d=(d%100);
    printf("%d nota(s) de R$ 50.00\n",d/50);
    d=(d%50);
    printf("%d nota(s) de R$ 20.00\n",d/20);
    d=(d%20);
    printf("%d nota(s) de R$ 10.00\n",d/10);
    d=(d%10);
    printf("%d nota(s) de R$ 5.00\n",d/5);
    d=(d%5);
    printf("%d nota(s) de R$ 2.00\n",d/2);
    printf("MOEDAS:\n");
    d=(d%2);
    printf("%d moeda(s) de R$ 1.00\n",d/1);

    b=a;
    c=a-b;
    c=c*100;
    d=c;
    printf("%d moeda(s) de R$ 0.50\n",d/50);
    d=d%50;
    printf("%d moeda(s) de R$ 0.25\n",d/25);
    d=d%25;
    printf("%d moeda(s) de R$ 0.10\n",d/10);
    d=d%10;
    printf("%d moeda(s) de R$ 0.05\n",d/5);
    d=d%5;
    printf("%d moeda(s) de R$ 0.01\n",d/1);

    return 0;

}
