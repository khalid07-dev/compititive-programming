#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   string name;
   ifstream file("sd.txt");
   while(getline(file,name))
   {
       cout<<name<<endl;
   }
  file.close();
}
