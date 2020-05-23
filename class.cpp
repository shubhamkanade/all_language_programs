#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        Demo();
        Demo(int);
        ~Demo();
};
Demo::Demo()
{
    cout << "Inside default constructor\n";
}
Demo::Demo(int value)
{
    cout<<"Inside parameterized constructor\n";
    i = value;
    j = value;
}
Demo::~Demo()
{
 cout<<"Inside destructor\n";   
}
int main()
{   
    Demo obj; 
    Demo obj1(11);
    Demo obj2(14);
    Demo obj4;
    
    return 0;
}