#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
    Base(){cout<<"Constructor";}
    virtual ~Base()
    {
        cout<<"Destructor of Base"<<endl;
    }
};

class Derived: public Base
{
     public:
     Derived()
     {
        cout<<"Constructor of derived";
     }
     ~Derived()
     {
        cout<<"Destructor of Derived"<<endl;
     }
};
void fun()
{
    Base *p=new Derived();
    delete p;
}

int main()
{
   fun();
}