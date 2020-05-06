#include<iostream>
using namespace std;
class Myclass
{
    int x;
public :
    Myclass()
    {
        x=0;
    }
    Myclass(int n)
    {
        x=n;
    }
    int gets()
    {
        return x;
    }
};
int main()
{
    Myclass o1(10);
    Myclass o2;

    cout<<" o1 : "<<o1.gets()<<endl;
    cout<<" o2 : "<<o2.gets()<<endl;

    return 0;
}
