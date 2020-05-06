#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;

   /* void display(){
        cout<<name<<endl;
        cout<<age<<endl;
*
}*/
};
class Student : public Person
{
public:
    int id;

    void display2(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<id<<endl;
    }
};
int main()
{
    Student ob1;
    ob1.id=191311009;
    ob1.name="khalid";
    ob1.age=23;
    ob1.display2();
    return 0;
}
