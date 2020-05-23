#include<iostream>
using namespace std;

class Demo
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    public: 
        int add(int no1,int no2)
        {
            return no1 + no2;
        }
        int add(int no1,int no2,int no3)
        {
            return no1 + no2 + no3;
        }
};
// int Demo::add(int no1,int no2)
// {
//     return no1 + no2;
// }
// int Demo::add(int no1,int no2,int no3)
// {
//     return no1 + no2 + no3;
// }
int main()
{
    Demo dobj;
    cout<<dobj.add(3,4)<<endl;
    cout<<dobj.add(3,5,8);

    return 0;
}