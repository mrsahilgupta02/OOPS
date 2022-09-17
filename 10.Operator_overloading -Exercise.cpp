#include<bits/stdc++.h>
using namespace std;

class Rational
{
    private:
     int p;
     int q;

     public:
     
    //  Rational()
    //  {
    //    p=1;
    //    q=1;
    //  }

     Rational(int p=0,int q=1)
     {
        this->p=p;
        this->q=q;
     }

      int getP( )
      {
        return p;
      }
      int   getQ()
      {
        return q;
      }

      Rational  operator+(Rational r)
      {
        Rational t;
        t.p=this->p*r.q+this->q*r.p;   //p1q2+p2q1
        t.q=this->q*r.q;               //q1q2
        int res=min(t.q,t.p);
        int i=res;
        while(i>1)
        {
            if(t.q%i==0 && t.p%i==0)
            {
                t.q=t.q/i;
                t.p=t.p/i;
                return t;
            }
        }
        return t;
      }

      friend ostream & operator<<(ostream &o ,Rational &r1);        //making ths function friend as it using two parameters of two different objects



};

ostream &operator<<(ostream &o,Rational &r1)
{
  o<<r1.p<<"/"<<r1.q;
  return o;
}

int main()
{
    Rational r1(1,2),r2(1,2),r3;
    r3=r2+r1;
    cout<<r3;
}