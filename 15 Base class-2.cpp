#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    public:
      void area()
      {
        cout<<"Area of rectangle"<<endl;
      }
};


class cuboid:public Rectangle
{
    public:
    void volume()
    {
        cout<<"Volume of cuboid"<<endl;
    }
};
int main()
{
    cuboid c;
    Rectangle r;
    c.area();
    c.volume();

    Rectangle *p;
    p=&c;
    p->area();
    //p->volume();    this  cant be called like this;
    


    //Cuboid *q=&r;    this is also not possibe in this we are saying that rectangle r is a cuboid which is not true

}