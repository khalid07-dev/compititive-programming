#include<iostream>
using namespace std;
class  Base
{
public:
    int u,a,t;
    int setter(int x,int y,int z)
    {
        u=x;
        a=y;
        t=z;
    }
    virtual int defination()=0;
};
class Derived:public Base
{
public:
    int defination()
    {
        return u+a*t;
    }

};
int main()
{
    Base *ob1;
    Derived ob2;
    ob1=&ob2;
    ob1->setter(10,40,50);
    cout<<"Answer of the equation is : "<< ob1->defination()<<endl;
}
