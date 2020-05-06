#include<bits/stdc++.h>
using namespace std;
int Travers(int arr[],int l)
{
    int i,c=0;
    for(i=0;i<l;i++){
        arr[i];
        c++;
    }
    return c;
}
void Insert(int arr[],int l,int p,int e){
    cout<<"Before insert :  ";
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;


    for(int j=l;j>=p;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[p]=e;
    l=l+1;
    cout<<"After Inserting :  ";
     for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Delet(int arr[],int l,int p)
{
    int d;
    d=arr[p];
    for(int i=p;i<l;i++)
    {
        arr[i]=arr[i+1];
    }
    l=l-1;

    cout<<"After Deleting :  ";
    for(int i=0;i<l;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The deleted item is : "<<d<<endl;

}

      /// main function

int main()
{
    int l,e;
    cout<<"inter the length of an array :  ";
    cin>>l;
    int arr[l];
    cout<<endl;

    cout<<"Enter the element of  array :  ";
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    sort(arr,arr+l);
    cout<<endl;


    int v= Travers(arr,l);
    cout<<"After Traversing total index are : "<<v<<endl;


    cout<<"Are you want to do merging ??"<<endl;
    cout<<endl;
    cout<<" if yes Press : 1"<<endl;
    cout<<"Either Press any number"<<endl;
    int val;
    cin>>val;
    if(val==1)
    {
        int k,ee;
        cout<<"inter the length of another array :  ";
        cin>>k;
        int b[k];
        cout<<endl;

        cout<<"Enter the element of another array :  ";
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        cout<<endl;
        sort(b,b+k);

        int t=l+k;
        int ma[t];



        int i=0;
        int j=0;
        int ct=0;
        while(ct<=t){
                if(arr[i]==b[j]){
                    ma[ct]=arr[i];
                    i++;
                    ma[ct+1]=b[j];
                    j++;
                    ct=ct+2;
                }
                else{
                    if(arr[i]<b[j])
                    {
                        ma[ct]=arr[i];
                        ct++;
                        i++;
                    }
                    else{
                        ma[ct]=b[j];
                        ct++;
                        j++;

                    }
                }
        }
        cout<<"After merging  : ";
        for(int i=0;i<t;i++){
            cout<<ma[i]<<" ";
        }
        cout<<endl<<endl;

    }
    else{
        cout<<"you did not do merging operation."<<endl;
    }



    Insert(arr,l,2,10);

    Delet(arr,l,0);


}
