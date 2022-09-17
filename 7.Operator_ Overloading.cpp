#include<bits/stdc++.h>
using namespace std;

class Complex
{
    
     

     public:
     int real;
     int img;

     Complex(int r=0,int i=0)
     {
        real=r;
        img=i;
     }
     
     Complex operator+(Complex x)        //operator overloading
     {                                   //its not a constructor its dattype is complex
        Complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
     }



};

int main()
{
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;
    c3=c2+c1;
    cout<<c3.real<<"+i"<<c3.img<<endl;
}