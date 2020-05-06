#include<bits/stdc++.h>
#define MAX_V 10
using namespace std;

typedef struct {
int top;
int data[MAX_V];
}Stack;

void push (Stack *s,int item)
{
    if (s->top<MAX_V)
    {
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else
    {
        cout<<"Stack overflow"<<endl;
    }
}

int pop (Stack *s){
    int item;
    if(s->top==0){
        cout<<"stack Underflow"<<endl;
        return -1;
    }
    else
    {
          s->top=s->top-1;
        item=s->data[s->top];
    }

     return item;

}
int main()
{
    Stack obj;

    obj.top=0;


    push(&obj,1);
    push(&obj,2);
    push(&obj,3);
    push(&obj,4);
    push(&obj,5);

    cout<<pop(&obj)<<endl;
    cout<<pop(&obj)<<endl;


}

