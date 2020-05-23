#include<iostream>
using namespace std;

class Arithematic
{
    private:
            int no1;
            int no2;
    public:
            Arithematic(int,int);
            int Add();
            int Sub();

};
Arithematic::Arithematic(int value1,int value2)
{
    no1 = value1;
    no2 = value2;

}
int Arithematic::Add()
{
    return no1 + no2;
}
int Arithematic::Sub()
{
    return no1 - no2;
}
int main()
{
    Arithematic obj(10,12);
    cout<<"Addition is "<<obj.Add()<<"\n";
    cout<<"Subtraction is "<<obj.Sub()<<"\n";
    cout << "Hello World"<<endl;
    return 0;
}