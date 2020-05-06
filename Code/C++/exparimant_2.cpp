#include<iostream>
using namespace std;
class Person{
public :
    string dept;
    int id;
    string sec;
    void display(){
        cout<<"Department :"<<dept<<endl;
        cout<<"ID :"<<id<<endl;
        cout<<"Section :"<<sec<<endl;
    }
};
class Academi{
public :
    float cgpa;
    string att;
    string per;
    void display2(){
        cout<<"CGPA : "<<cgpa<<endl;
        cout<<"Attendance : "<<att<<endl;
        cout<<"performance "<<per<<endl;
    }
};
class Student: public Person,public Academi{
 public :
     string name;
     void display3(){
         cout<<"Name :"<<name<<endl;
         cout<<"Department :"<<dept<<endl;
         cout<<"ID :"<<id<<endl;
         cout<<"Section :"<<sec<<endl;
         cout<<"CGPA : "<<cgpa<<endl;
         cout<<"Attendance : "<<att<<endl;
         cout<<"performance "<<per<<endl;
     }
};
int main(){
cout<<"Student Information :"<<endl;
Student ob;
ob.name="Khaid";
ob.dept="CSE";
ob.id=191311009;
ob.sec="A";
ob.cgpa=3.54;
ob.att="80%";
ob.per="Good";
ob.display3();
}
