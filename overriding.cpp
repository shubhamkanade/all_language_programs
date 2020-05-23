#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void fun()
        {
            cout<<"Inside base fun\n";
        }
        void gun()
        {
            cout<<"Inside base gun";
        }

};
class Derived : public Base{

    public:
            void fun()
            {
                cout<<"Derived fun";
            }
};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bp = new Derived();
    bp->fun();
    return 0;
}