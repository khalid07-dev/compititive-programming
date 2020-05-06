#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string s="";
    cin>>str;
    int c=0,a[1000],k=0;
    int l = str.size();
    stack<char>st;

    for(int i=0; str[i]; i++)
    {
        if(st.empty() &&str[i] == '(')
        {
            st.push('(');
        }
        if(str[i]==')')
        {
            if(!st.empty()){
                st.pop();
                s+="()";
            }
        }
    }
    if(s.empty())
    {
        cout<<0<<endl;
        return 0;
    }else{
        cout<<1<<endl;
        cout<<s.size()<<endl;
        cout<<s<<endl;
       // sort(s.begin(),s.end());
       for(int i=0;i<s.size();i=i+2)
       {
           for(int j=0;j<str.size();j++)
           {
               if (s[i]==str[j])
               {

                   a[k]=j+1;
                   ++k;
                   str[j]='c';
                   break;
               }

           }for(int j=str.size()-1;j>=0;j--)
           {
             a[k]=j+1;
             ++k;
             str[j]='c';
             break;
           }
       }sort(a,a+k);
       for(int i=0;i<k;i++)
        cout<<a[i]<<" ";
       cout<<endl;
    }



}

