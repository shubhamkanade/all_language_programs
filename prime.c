#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckPrime(int no)
{   
    int i =0 ;
    for(i=2;i<=(no/2);i++)
    {
        if((no%i) == 0 )
            break;
    }

    if(i>(no/2))
        return TRUE;
    else
    {
            return FALSE;
    }
}
int main()
{
    int no=0,i=0;
    BOOL bret;
    printf("Enter a number");
    scanf("%d",&no);

    bret = CheckPrime(no);

    if( bret == TRUE)
        printf("it is prime");
    else
    {
        printf("it is not prime");
    }
        
    return 0;
}