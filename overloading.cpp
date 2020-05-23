#include<iostream>
using namespace std;

class Demo
{
    public:
        int Add(int no1,int no2)
        {
            return no1+no2;
        }
        int Add(int no1,int no2,int no3)
        {
            return no1+no2+no3;
        }
};
int main()
{
    Demo obj;
    cout<<obj.Add(3,4)<<endl;
    cout<<obj.Add(3,2,1)<<endl;

    return 0;
}