#include<bits/stdc++.h>
using namespace std;

class Test
{
    private: 
    int a;
    protected: int b;
    public: int c;

    friend void fun();  //even fun datatype must be same
};

void fun()
{
    Test t;  //we can only acces upon object even by friend function
    t.a=10;//without declaring friend function we can not use these 
    t.b=15;
    t.c=20;
}

class your;   //before making it as a friend you have to declare it
class My
{
    private: 
    int a;
    protected: int b;
    public: int c;
        friend your;
};

class your
{
    public:
      My m;
      void fun()
      {
        m.a=10;
        m.b=15;
        m.c=20;
      }
}; 









int main()
{

}