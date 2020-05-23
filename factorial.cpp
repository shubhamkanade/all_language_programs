#include<iostream>
using namespace std;

class Factorial
{
    private:
            int no;
    public: 
            Factorial();
            int calfactorial();
            int calsum();
};

Factorial::Factorial()
{
    this->no = 5;
}

int Factorial::calfactorial()
{
    int ans = 1;
    int temp = no;
    while(temp != 0)
    {
        ans= ans * temp;
        temp--;
    }
    return ans;
}

int Factorial::calsum()
{
    int sum = 0;
    cout << endl<<" no is " << no<<endl;
    sum = sum + no;
    return sum;
}

int main()
{
    Factorial fobj;
    cout<<"factorial is "<<fobj.calfactorial()<<endl;
    int ret = fobj.calsum();
    cout<<"result is  " << ret<<endl;
    return 0;
}