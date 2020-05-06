#include<bits/stdc++.h>
using namespace std;
struct ll {
    int info;
    struct ll *next;

};
void creatlist(struct ll *ptr){
    cout<<"enter a number";
    cin>>ptr->info;
    if (ptr->info==-1){
        ptr->next=0;
    }
    else {
        struct ll *newnode;
        newnode=(struct ll*)malloc(sizeof(struct ll));
        ptr->next=newnode;
        creatlist(newnode);

    }
}
int  display(struct ll *ptr){
    int counter=0;
    cout<<"list number";
    while(ptr->next!=0)
    {
        cout<<ptr->info;
        ptr=ptr->next;
        counter++;


    }
    return counter;
}

int main()
{
    struct ll *start;
    start=(struct ll*)malloc(sizeof(struct ll));
    creatlist(start);
    cout<<"count ="<<display(start)<<endl;

}
