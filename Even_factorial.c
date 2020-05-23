#include<stdio.h>
int Evenfact(int number)
{
    int fact = 1;
    while(number != 0)
    {
        if(number%2 == 0)
        {
            fact = fact* number;
            number -= 2;
        }
        else
        {
                number -= 1;
        }
    }
    return fact;

}
int main()
{
    int number = 0;

    printf("enter number to calculate even factor");
    scanf("%d",&number);
    
    printf("the even factor addition is %d",Evenfact(number));
    return 0;
}