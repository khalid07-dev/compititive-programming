#include<iostream>
using namespace std;
int main()
{
    int num;
    int Ecount=0;
    int Ocount=0;
    cout<<"How many number you want to input for find even or odd\n";
    cin>>num;
    int arr[num];
    cout<<"Enter "<<num<<" number for check out\n";
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<num; i++)
    {
        if(arr[i]%2==0)
        {
            Ecount++;
        }
    }
    cout<<"\nTotal Even number = "<<Ecount<<endl;
    for(int i=0; i<num; i++)
    {
        if(arr[i]%2!=0)
        {
            Ocount++;
        }
    }
    cout<<"Total Odd number  = "<<Ocount<<endl;
}
