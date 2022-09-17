#include<bits/stdc++.h>
using namespace std;


class Rectangle
{
    private:              //data hiding
     int length;
     int breadth;

    public:

    void setLength(int l)   //making functions intelligent
    {
        if(l>=0)
           length=l;
        else
        {
            cout<<"length cant be negative"<<endl;
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
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(4);
    //cout<<r.getBreadth();
    cout<<"Area of rec is "<<r.area();


}
