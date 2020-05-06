#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,arr1[10],arr2[10],i;


    while(cin>>a>>b){
            int Count=0; int n=0;int p=0;
        if(a==0&&b==0){
            break;
        }
        else{
                i=0;
           while(a)
           {
               int x=a%10;
               a=a/10;

               arr1[i]=x;
               i++;

           }
           i=0;
            while(b)
           {
               int y=b%10;
               b=b/10;

               arr2[i]=y;
               i++;

               n++;

           }
           for(i=0;i<n;i++){
            if(arr1[i]+arr2[i]>9){
                p++;
            }

           }
           if(p==0)
           cout<<"No carry operation."<<endl;
           else if(p==1)
             cout<<p<<" carry operation."<<endl;
           else
            cout<<p<<" carry operations."<<endl;

        }
    }

}
