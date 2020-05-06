#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],a,b,c;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    a=arr[0];
    b=arr[1];
    c=arr[2];
    sort(arr,arr+3);
    for(int j=0;j<3;j++){
        cout<<arr[j]<<endl;
    }cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
