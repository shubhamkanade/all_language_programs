#include<stdio.h>

int Sumdigits(int number)
{
    int digit = 0 ,sum = 0;
    while(number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number /= 10 ;
    }
    return sum;
}
int main()
{
    int number = 0 , sum = 0;
    printf("Enter the number to calculate it's digit sum");
    scanf("%d" , &number);

    sum = Sumdigits(number);
    printf("Sum of digits is %d",sum);
    return 0;
}