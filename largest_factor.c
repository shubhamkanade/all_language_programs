#include<stdio.h>
typedef long int LONG;

LONG Largest_factor(LONG ino)
{
    register int icnt = 0;
    for (icnt = ino/2 ; icnt >=1 ;icnt -- )
    {
            if(ino % icnt == 0)
                break;
    }
    return icnt;
}
int main()
{
    int number = 0 , result = 0;
    printf("Enter number to calculate largest factor\n");
    scanf("%d",&number);

    result = Largest_factor(number);

    printf("Largest fator is %d",result);

    if(result == 1)
    printf("it is prime number\n");
    return 0;
}