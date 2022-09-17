#include<bits/stdc++.h>
using namespace std;


class Demo
{
    public:
    int x=10;
    int y=20;

    void display() const  //here we dont want to get any data member change by member function
    {
       // x++;               
        cout<<x<<" "<<y<<endl;
    }
};


void fun(const int &a,int &b)//we restrict fun not to modify x
{
    cout<<a<<" "<<b<<endl;
   // a++;
}



int main()
{/******************/   //for class
    Demo d;
    d.display();
/*********************/

int m=6;
int n=5;
fun(m,n);

cout<<"Main "<<m<<" "<<n;





    const int x=10;
        int y=20;
        int z=30;
   // cout<<x;

   // int *ptr=&y;
   // ++*ptr;    //  y will get incremented

    const int *ptr =&x;   // it is a pointer to a constant type integer 
    //++*ptr; // we cant do this


    int *const p=&y;     //so here ptr in constant which pointing to a integer
    //p=&z;   so not possible


    const int *const pt=&x;//here pt is a constant pointer pointing to constat integer
      //++*pt;     not possibe
      //pt=&z;     not possible

    //x++;  we cant change x as it is constant declared
}