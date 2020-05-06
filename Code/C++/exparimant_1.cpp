#include<bits/stdc++.h>
using namespace std;
binary_searching(int num,int beginning , int ending,int a[])
{
    int mid;
     while(beginning<=ending)
    {
        mid=(beginning+ending)/2;
        if(a[mid]==num)
        {
            return mid;
        }
        else if(a[mid]<num)
        {
            beginning=mid+1;
        }
        else{
          ending=mid-1;
        }

    }
    return -1;
}
int main()
{
    int n,i,j;
    cout<<"Enter a number n : ";
    cin>>n;
    int a[n+1];
    cout<<"Enter n number's : ";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"After sorting : ";
     for(i=1;i<=n;i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    int first=1;
    int last=n;
    int mid;
    int x;
    cout<<"Enter a number item which you want to search : ";
    cin>>x;
    int k = binary_searching(x,first,last,a);
    if(k==-1)
    {
        cout<<"Item is not found"<<endl;
    }
    else{
       cout<<"Search is successful"<<endl;
       cout<<"Found at position "<<k<<endl;
    }

}
