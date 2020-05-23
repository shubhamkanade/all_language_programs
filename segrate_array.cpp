#include<iostream>
using namespace std;

class user_array
{
    private : 
            int *arr;
            int length;
    public:
            user_array(int size = 10)
            {
                this -> length = size;
                arr = new int[10];
            }
            void Accept();
            void Display();
            void segregate();
};

void user_array::Accept()
{
    cout<<"Enter elements"<<endl;
    for(int i =0;i < length ; i++)
        cin >> arr[i];
}

void user_array :: Display()
{
    cout<<"After segregate"<<endl;
    for(int i =0;i < length ; i++)
        cout << arr[i] << " ";

}

void user_array :: segregate()
{
    int start = 0 , end = 0;

    for(start = 0,end = length - 1; start < end ; start++ , end--)
    {
        while( arr[start] != 21)
            start++;
        while(arr[end] != 11)
            end--;

        if((arr[start] == 21) && (arr[end] == 11))
        {
            arr[start] = 11;
            arr[end] = 21;
        }
    }
}

int main()
{
    user_array uobj(7);
    uobj.Accept();
    uobj.segregate();
    uobj.Display();

    return 0;
}

