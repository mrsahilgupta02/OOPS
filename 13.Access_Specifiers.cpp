#include<bits/stdc++.h>   //Must read notes for detail
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l=1,int b=1)
    {
        length=l;
        breadth=1;
    }
    void setLength(int l)   //making functions intelligent
    {
        if(l>=0)
           length=l;
        else
        {
            length=0; 
        }
             
    }
    void setBreadth(int b)   //this is mutator function
    {
        if(breadth>=0)
           breadth=b;
        else
        breadth=0;                                                              //these all set and get function together called property functions
    }
    int getLength()   //these are accessor functions
    {
        return length;
    }
    int getBreadth()  //these are accessor functions 
    {
        return breadth;
    }

     

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};

class Cuboid:public Rectangle
{

};
int main()
{
    Rectangle r1;

    cout<<r1.area()<<endl;
}