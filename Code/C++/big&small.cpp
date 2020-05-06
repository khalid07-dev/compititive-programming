#include<iostream>
using namespace std;
int main()
{
 int a,Max=0,Min=0;
 cout<<"Enter how many number you want to take : \n";
 cin>>a;
 int arr[a];
 cout<<"Enter "<<a<<" number for find max and min value \n";
 for(int i=0;i<a;i++)
 {
    cin>>arr[i];
 }
 Max=arr[0];
for(int i=0;i<a;i++)
 {
     if(Max<arr[i])
     {
     Max=arr[i];
     }
 }
 Min=arr[0];
 for(int i=0;i<a;i++)
 {
     if(Min>arr[i])
     {
     Min=arr[i];
     }
 }
 cout<<"\nMaximum number of this array is "<<Max<<endl;
 cout<<"Minimum number of this array is "<<Min<<endl;
 }
