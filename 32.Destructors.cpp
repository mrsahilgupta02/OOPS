#include<bits/stdc++.h>
using namespace std;

class Demo
{
    int *p;
    public:
       Demo()
       {
        cout<<"Constructor of Demo";
       }

       ~Demo()
       {
        delete []p;  //for dynsmicslly allocated memory
        cout<<"DEstructor of demo";
       }
};


void fun()
{
    //Demo d;
    Demo *p=new Demo();  //for calling Constructor only
    delete p;   //for calling Destructor
}
int main()
{
    fun();

}