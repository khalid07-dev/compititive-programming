#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number n : ";
    cin>>n;
    cout<<"Enter n number's : ";
    int a[10],counts,c,duplicate=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        counts=0,c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                counts++;

            }
        }
        for(int k=0;k<i;k++)
        {
            if(a[i]==a[k])
            {
                counts++;
                c++;
            }
        }

        if(counts>0 && c==0)
        {

            duplicate++;
        }
    }
    cout<<"\n"<<duplicate<<" duplicate elements"<<endl;

}
