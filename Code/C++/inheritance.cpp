#include<iostream>
using namespace std;
class Base{
int x;
public:
    void setx(int n){x=n;}
    void showx(){cout<<x<<endl;}

};
class Derived : private Base
{
    int y;
public:
    void setxy(int n,int m){setx(n); y=m;}
    void showxy(){showx(); cout<<y<<endl;}

};
int main()
{
    Derived ob;

     ob.setxy(10,20);
     ob.showxy();

     return 0;
}
