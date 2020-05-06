#include <iostream>
using namespace std;
int main()
{
 int n,arr[100],ma,mi,se;
 cout<<"Enter a positive number less then 100 :"<<endl;
 cin>>n;
 cout<<"Enter "<<n<<" numbers :"<<endl;
 cin>>arr[0];
 cin>>arr[1];
 if(arr[1]>=arr[0])
 {
 ma=arr[1];
 mi=arr[0];
 se=arr[0];
 }
 else
 {
 ma=arr[0];
 mi=arr[1];
 se=arr[1];
 }
 for(int i=2;i<n;i++)
 {
 se=arr[1];
 }
 for(int i=2;i<n;i++)
 {
 cin>>arr[i];
 if(arr[i]>ma)
 {
 se=ma;
 ma=arr[i];
 }
 else if(arr[i]>se&&se<ma)
 {
 se=arr[i];
 }
 else if(arr[i]<mi)
 {
 mi=arr[i];
 }
 }
 cout<<"Second Number :"<<se<<endl;
 return 0;
}
