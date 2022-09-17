#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
    Base(){cout<<"Non parameterized base"<<endl;}
    Base(int x){cout<<"Parameterized of Base  "<<x<<endl;}

};

class Derived:public Base
{
    public:
       Derived(){cout<<"Non parameterized of Derived"<<endl;}
       Derived(int y){cout<<"Parameterized of Derived"<<y<<endl;}
       Derived(int x,int y):Base(x){
        cout<<"parameterized of derived "<<y<<endl;
       }
};

int main()
{
    Derived d;      //this will execute first non param of base then derived
    Derived d1(20); //this will execute first non param of base and then param of derived
    Derived d2(20,10);
}