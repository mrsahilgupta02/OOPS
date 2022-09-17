#include<bits/stdc++.h>    //by using this we can make stack of ny datatype
using namespace std;
template<class T>      //declare template class
class Stack
{
    private:
    T *stk;
    int top;
    int size;

    public:
    Stack(int sz)
    {
        size=sz;
        top=-1;
        stk=new T[size];
    }

    void push(T x);
    T pop();
};

template<class T>    //we have to declare template before declaring every function
void Stack<T>::push(T x)
{
    if(top==size-1)
    {
        cout<<"Stack is Full";
    }
    else{
        top++;
        stk[top]=x;
    }
}


template<class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
       cout<<"Stack is Empty"<<endl;

    else{
        x=stk[top];
        top--;    }   
}



int main()
{
Stack<int> s(10);
Stack<float>s1(2);
s.push(10);
}