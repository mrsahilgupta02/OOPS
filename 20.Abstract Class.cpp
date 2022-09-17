#include<bits/stdc++.h>
using namespace std;

class car
{
    public:
    virtual void start()=0;     //now this is apure virtual function
};                              //and so car became a abstract class
                                //now we cant create object for this class in main function
class Innova:public car
{
    public:
    void start()                //if we dont override this func here this class will also became abstract
    {                           //then we will not be allowed to create object for this class
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
    //car c;  we cant do this as car is a abstract one
    car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();

}