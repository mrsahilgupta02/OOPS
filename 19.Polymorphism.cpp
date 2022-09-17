#include<bits/stdc++.h>
using namespace std;

class car
{
    public:
    virtual void start()
    {
        cout<<"Car Started"<<endl;
    }
};

class Innova:public car
{
    public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
};

class Swift:public car
{
    public:
    void start()
    {
        cout<<"Swift Started"<<endl;
    }
};




int main()
{
    car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();

}