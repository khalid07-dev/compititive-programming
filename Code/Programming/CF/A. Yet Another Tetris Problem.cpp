#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int n;
        int sum=0;
        int c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]%2==0){
                sum++;
            }
            else
                c++;
        }

        if (sum>0&&c==0){
            cout<<"YES"<<endl;
        }
         else if (sum==0&&c>0){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
