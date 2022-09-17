#include<bits/stdc++.h>
using namespace std;

class  Test
{
    public:
    int a;
    static int count;

    Test()
    {
        a=10;
        count++;
    }

   static int getcount()
   {
    //a++;  static function can only access static data memebers 
    return count;
   }

};

int Test::count=0;

int main()
{
    Test t1,t2;
    cout<<Test::getcount()<<endl;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=25;
    cout<<t2.count<<endl;  //here we changed count of t1 but automatically t2s count also changed
}                          //this is because count has a single entity and t1 t2 sharing it