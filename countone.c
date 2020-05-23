#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
typedef unsigned char BYTE;

UINT Countone(UINT number)
{
    UINT imask = 0x1,iresult = 0;
    BYTE icnt = 0;

    for(int i=1;i<=32;i++)
    {
        iresult = imask & number;
        if(iresult == imask)
            icnt++;
        imask = imask << 1;
    }
    return icnt;
}
int main()
{
    UINT value = 0;

    printf("enter the number to calculate one's");
    scanf("%u",&value);

    printf("the count is %d",Countone(value));

    return 0;
}