#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double arr[3],A,B,C;
     for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    C=arr[0];
    B=arr[1];
    A=arr[2];
    int c=0;
    if(A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
        c++;
    }
     if((A*A)==(B*B)+(C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    if((A*A)>((B*B)+(C*C)) )
    {
        if(c==0){
        printf("TRIANGULO OBTUSANGULO\n");
        }
    }
    if((A*A)<(B*B)+(C*C))
    {

        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B&&B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(A==B&C!=B)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
     if(A==C&B!=A)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
     if(B==C&A!=B)
    {
        printf("TRIANGULO ISOSCELES\n");
    }



    return 0;
}

