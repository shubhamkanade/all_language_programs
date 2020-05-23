#include<iostream>
using namespace std;

class Demo
{
    public:
        Demo();
        void fun(int &);
};
Demo::Demo()
{
    cout<<"Inside default constructor\n";
}
void Demo::fun(int &ref)
{
    cout<< ref;
    ref = 20;
    cout<< ref;
}
int main()
{
    Demo dobj;
    int k =10;
    dobj.fun(k);
    cout <<"inside main"<<"\t"<<k;
    return 0;
}