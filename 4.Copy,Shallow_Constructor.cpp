#include<bits/stdc++.h>
using namespace std;


class Rectangle
{
    private:              
     int length;
     int breadth;

    public:

    void setLength(int l)   
    {
        if(l>=0)
           length=l;
        else
        {
            cout<<"length cant be negative"<<endl;
            length=0; 
        }
             
    }
    void setBreadth(int b)   
    {
        if(breadth>=0)
           breadth=b;
        else
        breadth=0;                                                              //these all set and get function together called property functions
    }
    int getLength()   
    {
        return length;
    }
    int getBreadth()  
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

    // Rectangle()          //Non parameterized constructor
    // {
    //     length=1;
    //     breadth=1;       
    // }

    Rectangle(int l=1,int b=1)   //Parameterized
    {
        setLength(l);
        setBreadth(b);           // if we do l=1,b=1; we dont need non parameterized constructor
    }

    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }



};

int main()
{
    
     Rectangle rec(3,21);
     Rectangle r1(rec);
     cout<<r1.area();

}
