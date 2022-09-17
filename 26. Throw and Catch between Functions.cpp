#include<bits/stdc++.h>
using namespace std;

int division(int x,int y)
{
    
        if(y==0)
         throw 1;    //if we return here something the main will take it as a result so we made it throw

        return x/y;

    
}
int main()
{
    int x=10,y=10,z;

    try
    {
       if(y==0)             //its like we hsve to think exceptions and code for it
          throw 1;
       z=division(x,y);
       cout<<z<<endl;   
    }
    catch(int e)
    {
       cout<<"Divison by zero "<<e<<endl;                                                                
    }
    
    cout<<"Bye";  //to know program is executed or not
    
   // cout<<x<<endl;
}