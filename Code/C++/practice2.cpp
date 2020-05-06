#include<iostream>
using namespace std;
#define SIZE 10
class stacck
{
    char stck[SIZE];
    int tos;
public:
    void init ();
    void push(char ch);
    char popen();
};
void stacck::init()
{
    tos=0;
}
void stacck::push(char ch)
{
   if(tos==SIZE){
        cout<<"stack full"<<endl;
   return;
   }
   stck[tos]=ch;
   tos++;
}
char stacck::popen()
{
    if(tos==0){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stacck s1,s2;
    int i;
    s1.init();
    s2.init();


    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('x');
    s1.push('c');
    s2.push('z');

     for (i=0;i<3;i++)cout<<"pop s1"<<"  "<<s1.popen()<<endl;
     for (i=0;i<3;i++)cout<<"pop s2"<<"  "<<s2.popen()<<endl;
    return 0;
}

