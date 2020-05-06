#include<iostream>
using namespace std;
class Apple{
public :
      void  technology_company()
      {
          cout<<"This is an an American multinational technology company "<<endl;
      }
};
class Mac : public Apple
{
    public:
    void  Media_Access_control()
    {
        cout<<"The brand name and registered trademark for a line of computer"<<endl;
}
};
class iMac : public Mac
{
public:
    void  Macintosh_desktop_computers()
    {
        cout<<"It is a family of all-in-one Macintosh desktop computers "<<endl;
    }
};
class Macbookair : public Mac
{
public:
    void  line_of_laptop()
    {
        cout<<"The MacBook Air is a line of laptop computers"<<endl;
    }
};
class Macbookpro : public Mac
{
public:
    void  Macintosh_portable_computers()
    {
        cout<<"It is a line of Macintosh portable computers "<<endl;
    }
    void   functions()
    {
      Media_Access_control();  technology_company();
    }
};
class Ios:public Apple
{ public:
    void  mb_operating_system()
    {
cout<<"This is an operating system that use Apple's iphone"<<endl;
}
};
class iphone: public Ios
{
  public:
    void  smartphone()
    {
        cout<<"iPhone is a smartphone made by Apple that combines a computer, iPod, digital camera and cellular phone into one device"<<endl;
    }
};
class iphone8 : public iphone
{
public:
    void  costly()
    {
        cout<<"costly"<<endl;
    }

};
class iphoneX : public iphone
{
public:
    void  nota()
    {
        cout<<"nota"<<endl;
    }
};

class ipod : public Ios
{
    public:
    void  portable_media_player()
    {
        cout<<"ipod is a pocket-sized portable music playing device."<<endl;
    }
};
class ipados : public Apple
{
    public:
    void   tab_operating_system()
    {
        cout<<"This is an operating system of tablet"<<endl;
    }
};
class ipadAir : public ipados
{
public:
    void  ipad_Air_tablet()
    {
        cout<<"here"<<endl;
    }
};
class ipadMini : public ipados
{
public:
    void  ipadmini_tablet()
    {
        cout<<"The ipad mini is a line of mini tablet designed."<<endl;
    }
};
int main()
{
 Macbookpro ob1;
 ob1.technology_company();
 ob1.functions();
}


