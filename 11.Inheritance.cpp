#include<bits/stdc++.h>
using namespace std;


class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l=1,int b=1){
        length=l;
        breadth=b;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int area;
    int perimeter();

};

class cuboid:public Rectangle           //cuboid is a inherited class from rectangle
{
    private:
    int height;
    public:
    cuboid(int h)
    {
        height=h;
    }
    int getHeight(){return height;}
    void setheight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;      //in rectangle length,breadth are private so we cant use them so we use grt functions
    }
};

int main()
{
    cuboid c(5);
    c.setLength(6);
    c.setBreadth(2);
    cout<<c.volume()<<endl;
}