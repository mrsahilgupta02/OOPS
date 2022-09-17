#include<bits/stdc++.h>
using namespace std;


class stackOverflow:exception{};
class stackUnderflow:exception{};

class Stack
{

private:
  int *stk;
  int top=-1;
  int size;
public:
  Stack(int sz)
  {
    size=sz;
    stk= new int [size];
  }
  void push(int x)
  {
    if(top==size-1)
       throw stackOverflow();
  }

 int pop()
 {
    if(top==-1)
       throw stackUnderflow();
 }




};

int main()
{
    Stack s(5);

    s.push(0);
    //will give exception for pop

}