#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2,d,h,m,n;
    scanf("%lf%lf%lf",&a,&b,&c);
     d=((b*b)-4*a*c);

    if (d>0 && a!=0)
    {
        h=sqrt(d);
        x1=(-b+h);
        m=x1/(2*a);
        printf("R1 = %.5lf\n",m);

        x2=(-b-h);
        n=x2/(2*a);
        printf("R2 = %.5lf\n",n);
    }
    else{
        printf("Impossivel calcular\n");
    }
  return 0;
}
