#include<bits/stdc++.h>
using namespace std;
 
 class Rectangle
 {
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

 };

 int main()
 {
    Rectangle r1,r2,*p;              //these three will be stored in stack
    p=&r2;                             
    p->length=40;                     //access by pointer
    
    r1.length=2;
    r1.breadth=10;


    Rectangle *q=new Rectangle;  // dynamic object in heap,objects allocated in heap
    q->length=3;
    q->breadth=7;
    cout<<"Area of rec is "<<q->area();
    //cout<<"Area is "<<r1.area();
 }