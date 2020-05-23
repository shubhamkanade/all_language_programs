#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef  unsigned int UINT;

void Commonbits(UINT ino1,UINT ino2)
{
    UINT no = 0,mask = 0x1;

    no = ino1 & ino2;

    for(int i=1;i<=32;i++)
    {
        if((no & mask)== mask)
            printf("%d ",i);
        mask = mask << 1;
    }

}
int main()
{
    UINT ino1 = 0,ino2 = 0;

    printf("Enter 1st number");
    scanf("%x",&ino1);

    printf("Enter 2nd number");
    scanf("%x",&ino2);

    Commonbits(ino1,ino2);
    return 0;
}