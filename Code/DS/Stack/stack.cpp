#include<bits/stdc++.h>
#define Max 6
using namespace std;

 typedef struct{
 int top=-1;
 int data[Max];

 }Stack;
 void push(Stack *ptr,int a)
 {
    if (ptr->top<Max){
        ptr->data[ptr->top]=a;
       ptr->top=ptr->top+1;
    }
    else{
        cout<<"There is no space in stack"<<endl;
    }
 }
 int pop(Stack  *ptr)
 {

     int item;
     if(ptr->top==0)
     {
         cout<<"pop is not possible"<<endl;
         return -1;

     }
     else
     {
         ptr->top=ptr->top-1;
        return ptr->data[ptr->top];


     }

 }
 int main()
 {
     Stack abcd;

     abcd.top=0;
     push(&abcd,5);
     push(&abcd,4);
     push(&abcd,2);

     cout<<pop(&abcd)<<endl;
     cout<<pop(&abcd)<<endl;


 }

