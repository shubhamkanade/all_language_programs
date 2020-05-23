#include<stdio.h>
typedef unsigned int UINT;

int Countbit(UINT ino)
{
    int icnt = 0,digit = 0;
    for(;ino != 0;ino/=2)
        if(ino % 2 == 1)
            icnt++;   

    return icnt;
}
int main()
{
    UINT number = 0;
    int ret = 0;
    printf("Enter a number\n");
    scanf("%u",&number);
    ret = Countbit(number);
    printf("the number of 1's are %d",ret);
    return 0;
}