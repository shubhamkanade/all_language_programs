#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT ino)
{   
    UINT iresult = 0;

    UINT imask = 0x00000040;

    iresult = ino ^ imask;
    return iresult;
}
int main()
{  
    UINT number = 0;
    printf("Enter a number\n");
    scanf("%x",&number);
    
    printf("The number is %x",ToggleBit(number));
    return 0;
}