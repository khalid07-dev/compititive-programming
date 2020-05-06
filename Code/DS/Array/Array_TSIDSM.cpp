#include<bits/stdc++.h>
using namespace std;

int Travers(int arr[],int l){
    int Count=0;
    for(int i=0;i<l;i++){
        cout<<arr[i]<< " ";
         Count++;
    }
    return Count;
}

void Insert(int arr[],int l,int p,int v){
   for(int i=l;i>=p;i--){
    arr[i+1]=arr[i];
   }
    arr[p]=v;
   cout<<"After Insert  element"<<endl;
   for(int j=0;j<l+1;j++){
    cout<<arr[j]<<" ";
   }
   cout<<endl;
}
void Delete(int arr[],int l,int p,int v)
{
    for(int i=p;i<=l;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"After Deleting element "<<endl;
    for(int j=0;j<l;j++){
    cout<<arr[j]<<" ";
   }
   cout<<endl;

}
int main(){
    int l;int T;
    cout<<"Enter the length of Array"<<endl;
    cin>>l;
    cout<<"Enter the element : ";cout<<endl;
    int Array[l];
    for(int i=0;i<l;i++){
        cin>>Array[i];
    }

    T=Travers(Array,l);
    cout<< " After Traversing "<<T<<" element are in the array ";
    cout<<endl;

    Insert(Array,l,3,500);
    Delete(Array ,l,3,500);
}
