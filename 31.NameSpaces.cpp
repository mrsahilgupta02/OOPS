#include<bits/stdc++.h>
using namespace std;

namespace First
{
void fun()
{
    cout<<"First"<<endl;
}
}


namespace Second
{
void fun()
{
    cout<<"Second"<<endl;
}
}

namespace First
{
void main()
{
    fun();
    Second::fun();
   // First::fun();
    //Second::fun();
}

}