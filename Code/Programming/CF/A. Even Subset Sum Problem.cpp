#include<iostream>
using namespace std;
int main()
{
    int t,i,n,sum,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        cin>>n;
        int a[n];
        c=0;

        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        if(n==1 && a[0]%2!=0)
        {
            c++;
            cout<<"-1"<<endl;
        }
      else{

        for(int j=0;j<n;j++)
        {
            sum=0;
            if(a[j]%2==0)
            {
                sum=a[j];
                cout<<"1"<<endl;
                cout<<j+1<<endl;
                c++;
                break;

            }
        }

        int l=0;
        if(c==0)
        {
            for(int j=0;j<n;j++)
            {

               if(a[j]%2!=0 && l!=2)
               {
                       if(l!=1){
                            cout<<"2"<<endl;
                          cout<<j+1<<" ";
                          l++;
                       }
                       else
                       {
                          cout<<j+1<<endl;
                        l++;
                       }
               }

            }
       }
      }
    }
}
