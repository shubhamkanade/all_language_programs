#include<stdio.h>
typedef long int LONG;

LONG factorial_diff(int ino)
{   
    LONG efact = 1, ofact = 1;
    if(ino <= 0)
        ino = -ino;

    while(ino >= 1)
    {
        if(ino%2 == 0)
            efact = efact * ino;
            else
            {
                ofact = ofact * ino;
            }
            ino--;
    }

    return(ofact - efact);     
}
int main()
{
    int number = 0 ,result = 0;

    printf("Enter a number\n");
    scanf("%d",&number);

    result = factorial_diff(number);

    printf("The difference between even and odd factorial is %d",result);


    return 0;
}