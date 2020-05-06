#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
             for(int i=0;i<n;i++)
            {
                cin>>b[i];
            }sort(a,a+n);
            sort(b,b+n);
            for(int i=0;i<n;i++)
            {

                c[i]=a[i]+b[i];

            }
            sort(c,c+n);


            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {

                    if(c[i]==c[j])
                    {

                        swap(b[i],b[j]);


                    }
                }
            }


            for(int k=0;k<n;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
             for(int k=0;k<n;k++)
            {
                cout<<b[k]<<" ";
            }
            cout<<endl;
    }
}
