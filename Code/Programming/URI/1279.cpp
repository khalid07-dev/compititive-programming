#include<bits/stdc++.h>
using namespace std;
int r(string s,int n)
{
    int l=s.size(),v=0;
    for(int i=0;i<l;i++)
    {
        v=((10*v)+(int )s[i]-'0')%n;
    }
    return v;
}
int main()
{
    string n;
    while(cin>>n)
    {
        int c=0,d=0,e=0;
        int y;
        y=r(n,4);
        int p;
        p=r(n,400);
     int   xx=r(n,100);
        if(!y&&xx||!p)
        {
              cout<<"This is leap year."<<endl;
              c++;
        }
        int q;
        q=r(n,15);
        if(!q)
        {
          cout<<"This is huluculu festival year."<<endl;
          d++;
        }
        int x;
        x=r(n,55);
        if(!x &&c)
        {
          cout<<"This is Bulukulu festival year."<<endl;
          e++;
        }
        if(!c&&!d&&!e)
        {
            cout<<"This is an ordinary year."<<endl;
        }
        cout<<endl;

    }

}

