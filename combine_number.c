#include<stdio.h>
typedef unsigned int UINT;

UINT CombineNumber(UINT no1,UINT no2)
{   
    UINT imask1 = 0xffff0000, imask2 = 0x0000ffff ,result = 0;
    
    no1 = no1 & imask1;
    no2 = no2 & imask2;

    result = no1 | no2;

    return result;
}
int main()
{
    UINT ino1 = 0,ino2 =0 ,result = 0;

    printf("Enter 1st number\n");
    scanf("%x",&ino1);

    printf("Enter 2nd number\n");
    scanf("%x",&ino2);

    result = CombineNumber(ino1,ino2);

    printf("%x",result);
    
    return 0;
}