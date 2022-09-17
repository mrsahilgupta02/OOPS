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

    friend Complex operator+(Complex c1,Complex c2);
    

    void display()             //we have written this display func because we cannot use private members in main function
    {
        cout<<real<<"+i"<<img;
    }

    
  };
//friend function provide flexibility to class
  Complex operator+(Complex c1,Complex c2)   //this is friend function for class so we dont need to use scope resolution 
  {
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
  }


  int main()
  {
    Complex c1(5,3),c2(4,9),c3;
    c3=c2+c1;
    c3.display();
  }