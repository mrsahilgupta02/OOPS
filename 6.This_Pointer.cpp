#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
       Rectangle(int length, int breadth)
       {
        this->length=length;     //  this ponter refer to the length we declared in private part
        this->breadth=breadth;        //this pointer decrease name ambiguity
       }
       int area()
       {
        return length*breadth;
       }


};
int main()
{
    Rectangle r1(12,5);
    cout<<r1.area();
}