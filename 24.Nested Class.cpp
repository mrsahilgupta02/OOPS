#include<bits/stdc++.h>
using namespace std;

class Outer
{
     class Inner
     {
        public:
        void display()
        {
            cout<<"Display of Inner"<<endl;
        }
     };
    public:
      void fun()
      {
        i.display();
      }
    
      Inner i;//before declaration you must have defined this class

};


int main()
{

    //Outer::Inner i

}
