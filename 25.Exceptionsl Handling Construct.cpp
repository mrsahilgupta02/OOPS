#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x=10,y=0,z;

    try
    {
       if(y==0)             //its like we hsve to think exceptions and code for it
          throw 1;
       z=x/y;
       cout<<z<<endl;   
    }
    catch(int e)
    {
       cout<<"Divison by zero "<<e<<endl;                                                                
    }
    
    cout<<"Bye";  //to know program is executed or not
    
   // cout<<x<<endl;
}