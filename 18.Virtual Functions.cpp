#include<bits/stdc++.h>     //Must read theory from notes,page nu 
using namespace std;


class Base
{
    public:
     virtual void display()           //virtual function
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
    Derived d;
    Base *ptr=&d;
    ptr->display();
}