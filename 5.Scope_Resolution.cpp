#include<bits/stdc++.h>
using namespace std;
 
 class Rectangle
 {
    public:
    int length;
    int breadth;
    int area()              //inline function
    {
        return length*breadth;
    }
    int perimeter();
    

 };

 int Rectangle::perimeter()      //we scoped this function with the class rectangle
 {
    return 2*(length+breadth);   //it will have a seprate function area
 }
