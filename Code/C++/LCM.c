#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int n1,n2;
    cout<<"Enter two number's for LCM:"<<endl;
    cin>>n1>>n2;
    cout<<n1*n2/gcd(n1,n2)<<endl;
    return 0;
}
