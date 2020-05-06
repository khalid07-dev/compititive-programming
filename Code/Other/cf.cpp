#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i>=m;i++){
        a[i]=i;
    }
    cout<<a[1]<<endl;
    }
}
