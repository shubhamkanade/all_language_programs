#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;
        int ans;
        Arithematic();
        Arithematic(int,int);
        Arithematic(Arithematic &);
        ~Arithematic();
        inline void add();
        inline void sub();
};
Arithematic::Arithematic()
{
    cout<<"Inside default contructor\n";
    no1 = no2 = ans = 0;
}
Arithematic::Arithematic(int value1,int value2)
{
    cout<<"Inside parameterized constructor\n";
    no1 = value1;
    no2 = value2;
}
Arithematic::Arithematic(Arithematic &ref)
{
    this->no1 = ref.no1;
    this->no2 = ref.no2;
}
Arithematic::~Arithematic()
{
    cout<<"Inside destructor\n";
}
void Arithematic::add()
{
    ans = no1 + no2;
    cout << "addition is " << " " << ans;
}
int main()
{
    Arithematic aobj;
    Arithematic aobj2(5,4);
    aobj.add();
    aobj2.add();
    Arithematic aobj3(aobj2);
    aobj3.add();
    return 0;
}