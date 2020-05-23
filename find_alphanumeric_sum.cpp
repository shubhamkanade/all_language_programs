#include<stdio.h>
#include<iostream>
using namespace std;

int findsum(string str)
{
    string temp = " ";
    int sum = 0;
    for(char ch: str)
    {
        //cout<<ch;

        if (isdigit(ch))
        {
            temp = ch;
            sum  = sum + atoi(temp.c_str());
        }
    }
    cout<<sum;
}
int main()
{

    findsum("hel5lo12");
    return 0;
}