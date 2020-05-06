#include<iostream>
using namespace std;
class Cars
{
    string name;
    string brand;
    string color;
    int milage;
    int cc;
    int price;
public:
    void set_values(string nm,string brd,string clr,int mlge,int c,int pr)
    {
       name=nm;
       brand=brd;
       color=clr;
       milage=mlge;
       cc=c;
       price=pr;
    }
    void get_values()
    {
     cout<<name<<" "<<brand<<" "<<color<<" "<<milage<<" "<<cc<<" "<<price<<endl;
    }

};
int main()
{
Cars c1;
c1.set_values("Bugardi","BMW","Blue",25,4000,90000);
c1.get_values();
}
