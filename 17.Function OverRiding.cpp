#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
     void display()
     {
        cout<<"Display Base"<<endl;
     }
};

class Derived:public Base
{
   public:
    void display()                    // function overriding
    {
        cout<<"Display Derived"<<endl;
    }
};

int main()
{
    Base b;
    Derived d;
    b.display();
    d.display();
    d.Base::display();   //this is how you can call overrided fun for base class
}