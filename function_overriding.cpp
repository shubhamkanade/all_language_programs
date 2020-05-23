#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
        int j;
        virtual void fun() = 0;
        void gun()
        {

        }
};
class Derived:public Base
{
    public:
        int x,y;
         void fun()
         {

         }
};
int main()
{
    Derived dobj;
    Base *bp = &dobj;;
    return 0;
}