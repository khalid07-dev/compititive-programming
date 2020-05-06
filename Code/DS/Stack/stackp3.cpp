#include<bits/stdc++.h>
#define n 5
using namespace std;


int Stack[n],top=0,i;
void push()
{
    if(top<n)
    {
        cin>>Stack[top];
        top++;
    }
    else
    {
        cout<<"Stack overflow"<<endl;
    }
}
void pop()
{
    if(top==0)
    {
        cout<<"Sorry, Stack is empty..."<<endl;
    }
    else
    {
        top=top-1;
        cout<<Stack[top];
    }
}
int main()
{
    push();
    push();
    push();
    push();
    push();

    pop();cout<<endl;
    pop();cout<<endl;
    pop();cout<<endl;
}

