#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Checkbit(UINT ino,int pos1,int pos2)
{
    printf("pos is %d",pos1);
    printf("pos is %d",pos2);

    UINT imask1 = 1,imask2 = 1,iresult = 0,imask = 0;

    imask1 = imask1 << (pos1 - 1);

    imask2 = imask2 << (pos2 - 1);

    imask = imask1 | imask2;

    iresult = ino & imask;

    if(iresult == imask)
        return TRUE;
    else
        return FALSE;
}
int main()
{
    UINT value = 0;
    int pos1 = 0 ,pos2 = 0 ;

    printf("Enter number");
    scanf("%x",&value);

    printf("TYhe number is %x",value);

    printf("Enter 1st position and second position");
    scanf("%d%d",&pos1,&pos2);

    if(Checkbit(value,pos1,pos2) == TRUE)
        printf("Bit is on");
        else
        {
            printf("bit is off");
        }
        


    return 0;
}