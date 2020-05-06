#include<iostream>
using namespace std;
int main()
{
 int n,Max,secondmax;
 cout<<"How many number you want take \n";
 cin>>n;
 int arr[n];
 cout<<"Enter "<<n<<" number for check out\n";
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 Max=arr[0];
 for(int i=0;i<n;i++)
 {
 if(Max<arr[i])
 {
Max=arr[i];
 }
 }
 for(int i=0;i<n;i++)
 {
 if(arr[i]!=Max)
 {
 arr[i]=arr[i];
 }
 }
 secondmax=arr[0];
 for(int i=0;i<n-1;i++)
 {
 if(secondmax<arr[i])
 {
 secondmax=arr[i];
 }
 }
 cout<<"\nThe Second maximum number of the array is : "<<secondmax<<endl;
 }

