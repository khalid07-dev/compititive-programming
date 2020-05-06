#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    double gpa;
};


int main()
{
    Student Alim;
    Alim.id=110;
    Alim.gpa=3.99;
    cout<<Alim.id <<" "<<Alim.gpa<<endl;
}
