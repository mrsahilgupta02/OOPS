#include<bits/stdc++.h>
using namespace std;

class BasicCar
{
    public:
    void  start()
    {
        cout<<"car started"<<endl;
    }
};

class AdvanceCar:public BasicCar
{
    public:
    void onAc()
    {
        cout<<"Air conditioner is turned on";
    }
};


int main()
{
    BasicCar b;

    //AdvanceCar *ptr=&b;   we cant point to a basic car and say its a advance car
                            //because basic car dont hve the function which advance car have
    AdvanceCar a;
    BasicCar *ptr=&a;  // we can point to a advance car and can say its a basic car
    ptr->start();
   // ptr->onAc();  ptr is a type of basic car so it dont have AC

}