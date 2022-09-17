#include<bits/stdc++.h>
using namespace std;

class  Innova
{
    public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};  
int Innova::price=100;




class Student
{
    public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        addNo++;
        roll=addNo;
        name=n;
    }
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
};
int Student::addNo=0;






int main()
{
    // Innova i1,i2,i3;

    // cout<< i1.price<<endl;
    // cout<<i2.price<<endl;
    // cout<<Innova::getPrice();


   Student s1("John");
   Student s2("Cena");
   Student s3("jabba");
    Student s4("John");
   Student s5("Cena");
   Student s6("jabba");

   s1.display();

   s3.display();


    
}