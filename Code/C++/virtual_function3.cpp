#include<iostream>
using namespace std;
class base
{
public:
    int p=20,q=30;
    virtual void add (){
        cout<< "sum of"<<p<<" and "<<q<<" = "<<p+q <<endl;
        }
    void multiplication (){
      cout<< "multiplication of "<<p<<" and "<<q<<" = "<<p*q <<endl;
    }
};
class derived:public base
{
public:
    int p=15,q=20;
    void add (){
        cout<< "sum of"<<p<<" and "<<q<<" = "<<p+q <<endl;
    }
    void multiplication (){
        cout<< "multiplication of "<<p<<" and "<<q<<" = "<<p*q <<endl;
        }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->add ();
    bptr->multiplication ();
}

