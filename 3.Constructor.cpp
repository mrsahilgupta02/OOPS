 #include<bits/stdc++.h>
 using namespace std;


class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l)   //making functions intelligent
    {
        if(l>=0)
           length=l;
        else
        {
            cout<<"length cant be negative"<<endl;
            length=0; 
        }
             
    }
    void setBreadth(int b)   //this is mutator function
    {
        if(breadth>=0)
           breadth=b;
        else
        breadth=0;                                                              //these all set and get function together called property functions
    }
    int getLength()   //these are accessor functions
    {
        return length;
    }
    int getBreadth()  //these are accessor functions 
    {
        return breadth;
    }



    //   Rectangle()            //Non parameterized constructor
    //   {
    //     length=0;
    //     breadth=0;
    //   }
      Rectangle(int l=0,int b=0)   //parameterized constructor
      {
           setLength(l);
           setBreadth(b);
      }

      Rectangle(Rectangle &rect)   //Copy Constructor
      {
        length=rect.length;
        breadth=rect.breadth;
      }

      int area()
    {
        return length*breadth;
    }
};


int main()
{
    Rectangle r1;
    cout<<r1.area();
}