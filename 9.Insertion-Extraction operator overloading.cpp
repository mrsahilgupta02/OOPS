#include<bits/stdc++.h>
using namespace std;
  

  class Complex
  {
    private:
    int real;
    int img;
    public:Complex(int r=0,int i=0)
     {
        real=r;
        img=i;
     }

     friend ostream & operator<<(ostream &O,Complex&c1);   //this function type is cout so we write ostream
                            //we have to give two operators to << (cout,cmplex nu)
  }; 

  ostream & operator<<(ostream &o,Complex &c1)
  {
   o<<c1.real<<"+i"<<c1.img; 
   return o;       //instead of cout we passed o so it is used here
  }


  int main()
  {
   Complex c1(4,9);
   cout<<c1;
  }

  // if we make the function of type void it will run but we then cant cout multiple values in same line