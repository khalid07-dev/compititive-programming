#include<bits/stdc++.h>
using namespace std;


int n=5;
int Stack[n];
int top=0,i;
void push()
{
    if(top<n){
         cout<<"Enter a data : "<<endl;
         cin>>Stack[top]>>endl;
         top++;
         cout<<"\n PUSH operation has successful .\n";
    }
    else{
        cout<<"Stack is overflow.\n";
    }

}

void pop()
{
    if(top==0){
        cout<<"SORRY..Stack is empty.\n";
    }
    else
    {
        top=top-1;
        cout<<"POP operation has successful..\n";
        cout<<"Deleted item is "<<Stack[top]<<endl;
    }
}
void displa()
{
    for(i=top-1;i>0;--i){
        cout<<"\n"<<Stack[i+1]-Stick[i];
    }
}

int main()
{
   char p;
   while(p!='0')
   {
       cout<<"\n\t 0. Exit";
       cout<<"\n\t 1. PUSH";
       cout<<"\n\t 2. POP";
       cout<<"\n\t 3. Display";
       cout<<"\n\t 4. Display top";
       cout<<"\n\t Enter your operation>>";
       cin>>p;
       switch(p){
            case '1': push();break;
            case '2': pop();break;
            case '3': display();break;
            case '4': cout<<"\n TOP = "<<top;
            case '0': cout<<"\n thanks for using..";

            default : cout<<"\n Invalid..please try again.";
       }
       cout<<"\n Enter any key to continue...";
   }
}
